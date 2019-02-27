#ifndef H_MAP_LOADER
#define H_MAP_LOADER

#include <vector>
#include <map>

#include "MapData.h"

struct Tile {
	Tile_Type m_tileType;
	Enemy_Type m_enemy_type; // NONE, for no Enemy
};
//single vector wih x + y*width mapping would be better, but for this project this is sufficiet(and well, i didnt think about it when implementing the loader)
using Tilemap = std::vector<std::vector<Tile>>;


class MapLoader
{
public:
	static Tilemap loadMap(const std::string& file);
	static inline int getWidth() { return m_width; }
	static inline int getHeight() { return m_height; }
private:
	static void processLine(std::vector<Tile>& tile_row, char sign);
	static void printTilemap(const Tilemap& tilemap);
	static void loadHeader(std::ifstream& file);


	static int m_width, m_height;
	static int m_starts, m_goals;
};

#endif
