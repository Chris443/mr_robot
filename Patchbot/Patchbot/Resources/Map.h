#ifndef H_MAP
#define H_MAP

#include <memory>

#include "MapLoader.h"
#include "../Robots/Player.h"

class Map
{
public:
	Map(const std::string& file);

	~Map();

	Tilemap& getMap() { return map; }

	std::shared_ptr<Player> get_Player() { return player; }
	void update_Patchbot(int x,int y);
private:
	Tilemap map;

	std::shared_ptr<Player> player;
	//std::vector<Robot_Type> robots;

	void init_robot_positions();
};

#endif
