#include "MapLoader.h"


#include <fstream>
#include <iostream>
#include <string>

#include "../util/Exception.h"

int MapLoader::m_width(0);
int MapLoader::m_height(0);
int MapLoader::m_starts(0);
int MapLoader::m_goals(0);

Tilemap MapLoader::loadMap(const std::string& filepath) {
	Tilemap tilemap;

	std::ifstream file(filepath);
	if (!file)
		std::cout << "Cant open file" << std::endl;

	//check if integer
	loadHeader(file);
	std::string line;
	try {
		while (std::getline(file, line)) {
			std::vector<Tile> current_Tile_row;
			for (char& c : line) {
				processLine(current_Tile_row, c);
			}

			if (current_Tile_row.size() != m_width) {
				throw rob::Exception(rob::ERROR_TYPE::WRONG_MAP_WIDTH);
			}

			tilemap.push_back(current_Tile_row);
		}

		if (tilemap.size() != m_height) {
			throw rob::Exception(rob::ERROR_TYPE::WRONG_MAP_HEIGHT);
		}
		if (m_starts != 1)
			throw rob::Exception(rob::ERROR_TYPE::WRONG_AMOUNT_OF_START_TILES);
		if (m_goals == 0)
			throw rob::Exception(rob::ERROR_TYPE::NO_GOAL_TILE);
	}


	catch (const rob::Exception& e) {
	}


	try {
		file.close();
	}
	catch (const std::exception& s) {
		//couldnt close file
	}

	return std::move(tilemap);
}

void MapLoader::processLine(std::vector<Tile>& tile_row, char sign) {
	if (!isdigit(sign)) {
		auto iterator = mapped_data.find(sign);

		if (sign == 'p')
			++m_starts;
		if (sign == 'P')
			++m_goals;

		if (iterator == mapped_data.end()) {
			throw rob::Exception(rob::ERROR_TYPE::UNSUPPORTED_TYPE);
		}

		tile_row.push_back(Tile({ iterator->second,Enemy_Type::NONE }));
	}
	else if (sign < 56 && sign >48) { // ascii 1-7
		tile_row.push_back(Tile({ Tile_Type::ENEMY_START_TILE, static_cast<Enemy_Type>(sign - 48) }));

	}
	else {
		throw rob::Exception(rob::ERROR_TYPE::UNSUPPORTED_TYPE);
	}
}

void MapLoader::loadHeader(std::ifstream& file) {
	std::string line;

	std::getline(file, line);
	for (char& c : line) {
		if (isdigit(c)) {
			m_width = m_width * 10 + (int(c) - 48);
		}
		else {
			throw rob::Exception(rob::ERROR_TYPE::HEADER_WRONG_FORMAT);
		}
	}
	std::getline(file, line);
	for (char& c : line) {
		if (isdigit(c)) {
			m_height = m_height * 10 + (int(c) - 48);
		}
		else {
			throw rob::Exception(rob::ERROR_TYPE::HEADER_WRONG_FORMAT);
		}
	}
}

void MapLoader::printTilemap(const Tilemap& tilemap) {
	std::vector<char> testType{ 'p','P',' ','#','M','d','D','g','.','x','O','~','R' };

	for (int i = 0; i < tilemap.size(); ++i) {
		for (int j = 0; j < tilemap[i].size(); ++j) {
			int a = tilemap[i][j].m_tileType;
			if (a == 12)
				std::cout << tilemap[i][j].m_enemy_type;
			else
				std::cout << testType[a];
		}
		std::cout << std::endl;
	}
}