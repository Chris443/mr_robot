#include "Map.h"


Map::Map(const std::string& file)
{
	map = MapLoader::loadMap(file);

	init_robot_positions();

}


Map::~Map()
{
}


void Map::init_robot_positions() {
	//@TODO Türen Speichern
	for (int y = 0; y < map.size(); ++y) {
		for (int x = 0; x < map[y].size(); ++x) {
			if (map[y][x].m_robot_type == Robot_Type::PATCHBOT) {
				player = std::make_shared<Player>( x, y );
				break;
			}
		}
	}
}

void Map::update_Patchbot(int x,int y) {

	//case Tile_Type::ALIEN_GRAS:


	auto next_tile = map[y][x].m_tileType;
	/*switch (next_tile) {
	case Tile_Type::ABYSS_TILE: //Die + game over
	case Tile_Type::WATER_TILE: //Die + game over
	case Tile_Type::CONCRETE_WALL:
	case Tile_Type::ROCK_TILE:
	default:*/
		map[player->get_yPos()][player->get_xPos()].m_robot_type = Robot_Type::NONE;
		map[y][x].m_robot_type = Robot_Type::PATCHBOT;
		player->set_Pos(x, y);
	//}
}

/*

*/