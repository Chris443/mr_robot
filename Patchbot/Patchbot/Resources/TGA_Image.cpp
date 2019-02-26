#include "TGA_Image.h"

TGA_Image::TGA_Image(const std::string& filepath)
{
	std::ifstream file(filepath,std::ios::in | std::ios::binary);

	if (!file) {
		throw rob::Exception(rob::ERROR_TYPE::TGA_FILE_LOADING_ERROR);
	}
	try {
		//file should be valid here
		processHeader(file);
		loadImageData(file);
	}
	catch (const rob::Exception&) {
		delete[] image_data;
		file.close();
	}
	catch (std::exception& e1) {
		delete[] image_data;
		file.close();
	}
	file.close();
}
TGA_Image::~TGA_Image()
{
		delete[] image_data;
}

void TGA_Image::processHeader(std::ifstream& file) {
	file.read((char*)&header,sizeof(tga_header));
	if (!(header == tga_template_header)) {
		throw rob::Exception(rob::ERROR_TYPE::WRONG_TGA_HEADER);
	}
}

void TGA_Image::loadImageData(std::ifstream& file) {
	//if here, header is in supported format
	imageSize = header.width * header.height * header.bpp; //sizeof(pixel)*8 == header.bpp
	try {
		image_data = (char*)malloc(imageSize);
			if (!image_data) throw rob::Exception(rob::ERROR_TYPE::BAD_ALLOC);
		file.read(image_data, imageSize);
	}
	catch (const rob::Exception&) {}
	catch (std::exception& e1) {
		std::string msg("Unexpected_Error: TGA_Loader"); 
		msg.append(e1.what());
		Log::instance().add_message(msg);
	}
}

void TGA_Image::copy_to_tga(const std::string& fileName) {
	try {
		std::ofstream outFile(fileName, std::ios::binary);

		outFile.write((const char*)&header, sizeof(tga_header));
		outFile.write((const char*)image_data, imageSize);

		outFile.close();
	}
	catch (std::exception& e) {
		std::string msg("Unexpected_Error: TGA_Loader");
		msg.append(e.what());
		Log::instance().add_message(msg);
	}
}

bool tga_header::operator==(const tga_header& header) const {
	return(
		header.id == id &&
		header.colorMaptype == colorMaptype &&
		header.imageTypeCode == imageTypeCode &&
		header.colorMapSpec[0] == colorMapSpec[0] &&
		header.colorMapSpec[1] == colorMapSpec[1] &&
		header.colorMapSpec[2] == colorMapSpec[2] &&
		header.x_origin == x_origin &&
		header.y_origin == y_origin &&
		header.bpp == bpp 
		);
}