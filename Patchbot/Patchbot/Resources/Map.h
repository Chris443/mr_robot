#ifndef H_MAP
#define H_MAP

#include "MapLoader.h"

class Map
{
public:
	Map(const std::string& file);

	~Map();

	Tilemap& getMap() { return map; }
private:
	Tilemap map;
};

#endif
