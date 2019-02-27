#include "Map.h"


Map::Map(const std::string& file)
{
	map = MapLoader::loadMap(file);
}


Map::~Map()
{
}
