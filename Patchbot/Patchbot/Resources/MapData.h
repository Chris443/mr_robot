#ifndef H_MAP_DATA
#define H_MAP_DATA

#include <map>

enum Tile_Type {
	START_TILE,
	GOAL_TILE,
	DIRT_TILE,
	CONCRETE_WALL,
	ROCK_TILE,
	DOOR,
	AUTOMATIC_DOOR,
	ALIEN_GRAS,
	GRAVEL,
	SECRET_TILE,
	ABYSS_TILE,
	WATER_TILE,
	ENEMY_START_TILE,
	OPEN_DOOR,
	OPEN_AUTOMATIC_DOOR
};

enum Robot_Type {
	BUGGER = 1,
	PUSHER,
	DIGGER,
	SWIMMER,
	FOLLOWER,
	HUNTER,
	SNIFFER,
	PATCHBOT,
	DEAD_ROBOT,
	NONE
};



const std::map<char, Tile_Type> mapped_data = {
		{'p',START_TILE},
		{'P',GOAL_TILE},
		{' ',DIRT_TILE},
		{'#',CONCRETE_WALL},
		{'M',ROCK_TILE},
		{'d',DOOR},
		{'D',AUTOMATIC_DOOR},
		{'g',ALIEN_GRAS},
		{'.',GRAVEL},
		{'x',SECRET_TILE},
		{'O',ABYSS_TILE},
		{'~',WATER_TILE},

};

#endif