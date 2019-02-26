#ifndef H_TGA_IMAGE
#define H_TGA_IMAGE

#include <fstream>
#include <iostream>
#include <string>
#include "../util/Exception.h"

/*Note: Maybe use some kind of vector<pixel>. it's just very ugly to work with/ use <iterator>
struct pixel {
	char b;
	char g;
	char r;
	char a; 
};*/

/*Note : Order struct Members from smallest to largest for small Padding;
dividing colorMapSpecs into 3 members (short,short,char) may result in wrong
results (20 bytes size instead of 18 -> wrong aligning)
*/
struct tga_header {
	char id; 
	char colorMaptype; 
	char imageTypeCode; 
	char colorMapSpec[5];  // 18 Bytes
	short x_origin; 
	short y_origin; 
	short width;
	short height;
	char bpp; 
	char imageDescriptor;
	bool operator==(const tga_header& header) const;
};
const tga_header tga_template_header = { 0,0,2,{0,0,0},0,0,32,32,32,0 }; 

class TGA_Image
{
public:
	TGA_Image(const std::string& filePath);
	~TGA_Image();

	//function to copy .tga file into new .tga file to check if everything is correct
	void copy_to_tga(const std::string& fileName);
	char* get_Image() { return image_data; };
	inline short get_height() { return header.height; }
	inline short get_width() { return header.width; }
private:
	void processHeader(std::ifstream& file);
	void loadImageData(std::ifstream& file);


	tga_header header;
	int imageSize;
	char* image_data;
};

#endif