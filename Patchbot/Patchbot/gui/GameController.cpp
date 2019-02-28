#include "GameController.h"



GameController::GameController()
	:map(std::make_shared<Map>("res/maps/everything.txt")),
	xScrollbar(0),
	yScrollbar(0)
{
	load_textures();
}


GameController::~GameController()
{
}

void GameController::load_textures() {
	std::string env_basePath = "res/umgebungen/";
	std::string rob_basePath = "res/roboter/";

	//some names dont fit, i.e. dort tile is actually metal floor...
	//enviroment textures
	std::shared_ptr<TGA_Image> tga = std::make_shared<TGA_Image>(env_basePath + "boden.tga");
	unsigned char* tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	QImage tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	ground_textures.insert(std::make_pair(Tile_Type::DIRT_TILE, std::make_shared<QImage>(tmp.mirrored())));

	tga = std::make_shared<TGA_Image>(env_basePath + "boden_start_gegner.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	ground_textures.insert(std::make_pair(Tile_Type::ENEMY_START_TILE, std::make_shared<QImage>(tmp.mirrored())));

	tga = std::make_shared<TGA_Image>(env_basePath + "boden_start_patchbot.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	ground_textures.insert(std::make_pair(Tile_Type::START_TILE, std::make_shared<QImage>(tmp.mirrored())));

	tga = std::make_shared<TGA_Image>(env_basePath + "gefahr_abgrund.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	ground_textures.insert(std::make_pair(Tile_Type::ABYSS_TILE, std::make_shared<QImage>(tmp.mirrored())));

	tga = std::make_shared<TGA_Image>(env_basePath + "gefahr_wasser.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	ground_textures.insert(std::make_pair(Tile_Type::WATER_TILE, std::make_shared<QImage>(tmp.mirrored())));

	tga = std::make_shared<TGA_Image>(env_basePath + "hauptserver.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	ground_textures.insert(std::make_pair(Tile_Type::GOAL_TILE, std::make_shared<QImage>(tmp.mirrored())));

	tga = std::make_shared<TGA_Image>(env_basePath + "hindernis_aliengras.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	ground_textures.insert(std::make_pair(Tile_Type::ALIEN_GRAS, std::make_shared<QImage>(tmp.mirrored())));

	tga = std::make_shared<TGA_Image>(env_basePath + "hindernis_geheimgang.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	ground_textures.insert(std::make_pair(Tile_Type::SECRET_TILE, std::make_shared<QImage>(tmp.mirrored())));

	tga = std::make_shared<TGA_Image>(env_basePath + "hindernis_schotter.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	ground_textures.insert(std::make_pair(Tile_Type::GRAVEL, std::make_shared<QImage>(tmp.mirrored())));

	tga = std::make_shared<TGA_Image>(env_basePath + "tuer_automatisch_geschlossen.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	ground_textures.insert(std::make_pair(Tile_Type::AUTOMATIC_DOOR, std::make_shared<QImage>(tmp.mirrored())));

	tga = std::make_shared<TGA_Image>(env_basePath + "tuer_automatisch_offen.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	ground_textures.insert(std::make_pair(Tile_Type::OPEN_AUTOMATIC_DOOR, std::make_shared<QImage>(tmp.mirrored())));

	tga = std::make_shared<TGA_Image>(env_basePath + "tuer_manuell_geschlossen.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	ground_textures.insert(std::make_pair(Tile_Type::DOOR, std::make_shared<QImage>(tmp.mirrored())));

	tga = std::make_shared<TGA_Image>(env_basePath + "tuer_manuell_offen.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	ground_textures.insert(std::make_pair(Tile_Type::OPEN_DOOR, std::make_shared<QImage>(tmp.mirrored())));

	tga = std::make_shared<TGA_Image>(env_basePath + "wand_beton.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	ground_textures.insert(std::make_pair(Tile_Type::CONCRETE_WALL, std::make_shared<QImage>(tmp.mirrored())));

	tga = std::make_shared<TGA_Image>(env_basePath + "wand_fels.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	ground_textures.insert(std::make_pair(Tile_Type::ROCK_TILE, std::make_shared<QImage>(tmp.mirrored())));

	//robot textures
	tga = std::make_shared<TGA_Image>(rob_basePath + "typ1_bugger.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	robot_textures.insert(std::make_pair(Robot_Type::BUGGER, std::make_shared<QImage>(tmp.mirrored())));

	tga = std::make_shared<TGA_Image>(rob_basePath + "typ2_pusher.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	robot_textures.insert(std::make_pair(Robot_Type::PUSHER, std::make_shared<QImage>(tmp.mirrored())));

	tga = std::make_shared<TGA_Image>(rob_basePath + "typ3_digger.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	robot_textures.insert(std::make_pair(Robot_Type::DIGGER, std::make_shared<QImage>(tmp.mirrored())));

	tga = std::make_shared<TGA_Image>(rob_basePath + "typ4_swimmer.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	robot_textures.insert(std::make_pair(Robot_Type::SWIMMER, std::make_shared<QImage>(tmp.mirrored())));

	tga = std::make_shared<TGA_Image>(rob_basePath + "typ5_follower.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	robot_textures.insert(std::make_pair(Robot_Type::FOLLOWER, std::make_shared<QImage>(tmp.mirrored())));

	tga = std::make_shared<TGA_Image>(rob_basePath + "typ6_hunter.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	robot_textures.insert(std::make_pair(Robot_Type::HUNTER, std::make_shared<QImage>(tmp.mirrored())));

	tga = std::make_shared<TGA_Image>(rob_basePath + "typ7_sniffer.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	robot_textures.insert(std::make_pair(Robot_Type::SNIFFER, std::make_shared<QImage>(tmp.mirrored())));
	//patchbot textures
	tga = std::make_shared<TGA_Image>(rob_basePath + "dead.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	robot_textures.insert(std::make_pair(Robot_Type::DEAD_ROBOT, std::make_shared<QImage>(tmp.mirrored())));

	tga = std::make_shared<TGA_Image>(rob_basePath + "patchbot.tga");
	tex = reinterpret_cast<unsigned char*>(tga->get_Image());
	tmp = QImage(tex, tga->get_width(), tga->get_height(), QImage::Format_ARGB32);
	robot_textures.insert(std::make_pair(Robot_Type::PATCHBOT, std::make_shared<QImage>(tmp.mirrored())));
}

void GameController::deleteProgrammCommand() {
	if (programmCommands.size() > 0) {
		programmCommands.erase(programmCommands.size() - 2, 2);
	}
}

void GameController::singleStep() {
	if (programmCommands.size() == 0)
		return;
	char command = programmCommands[0];
	int cmdCounter = static_cast<int>(programmCommands[1]) - 48;

	if (cmdCounter == 1)
		programmCommands.erase(0, 2);
	else {
		programmCommands[1] = cmdCounter + 47;
	}
	//Note: dont update player by map->get_player->setpos, only with update-pb
	int xpos = map->get_Player()->get_xPos();
	int ypos = map->get_Player()->get_yPos();
	//execute 
	switch (command) {
	case 'R':  xpos += 1;
		break;				   
	case 'L':  xpos -= 1;
		break; 			
	case 'U':  ypos -= 1;
		break; 			
	case 'D':  ypos += 1;
		break;
	case 'W': break;
	}

	map->update_Patchbot(xpos,ypos);
}

