#ifndef H_PATCHBOT_GAME_CONTROLLER
#define H_PATCHBOT_GAME_CONTROLLER
#include <string>
#include <vector>

#include <qimage.h>

#include "../util/Log.h"
#include "../Resources/TGA_Image.h"
#include "../Resources//MapData.h"
#include "../Resources/Map.h"

class GameController
{
public:
	GameController();
	~GameController();

	std::map<Tile_Type, std::shared_ptr<QImage>>& get_Ground_Textures() {return ground_textures;};
	std::map<Robot_Type, std::shared_ptr<QImage>>& get_Robot_Textures() { return robot_textures; };

	std::shared_ptr<Map> getMap() { return map; }

	void updateXScrollbar(int value) { 	xScrollbar = value; }
	void updateYScrollbar(int value) { yScrollbar = value; }

	void updateRenderWidgetWidth(int value) { renderWidgetWidth = value; }
	void updateRenderWidgetHeight(int value) { renderWidgetHeight = value; }

	int getXScrollbar() { return xScrollbar; }
	int getYScrollbar() { return yScrollbar; }

	int getRenderWidghetWidth() { return renderWidgetWidth; }
	int getRenderWidgetHeight() { return renderWidgetHeight; }

	void appendProgrammCommand(std::string s) { programmCommands.append(s); }
	std::string& getProgrammCommands() { return programmCommands; }
	void deleteProgrammCommand();
	void singleStep();
private:
	void load_textures();

	std::shared_ptr<Map> map;

	//environment textures
	std::map<Tile_Type,std::shared_ptr<QImage>> ground_textures;
	//enemy Textures
	std::map<Robot_Type,std::shared_ptr<QImage>> robot_textures;


	int xScrollbar;
	int yScrollbar;
	int renderWidgetWidth;
	int renderWidgetHeight;

	std::string programmCommands;
};

#endif
