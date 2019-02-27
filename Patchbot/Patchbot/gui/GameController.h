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
	std::map<Enemy_Type, std::shared_ptr<QImage>>& get_Enemy_Textures() { return enemy_textures; };
	std::map<Player_Textures, std::shared_ptr<QImage>>& get_Player_Textures() { return player_textures; };

	std::shared_ptr<Map> getMap() { return map; }

	void updateXScrollbar(int value) { 	xScrollbar = value; }
	void updateYScrollbar(int value) { yScrollbar = value; }

	void updateRenderWidgetWidth(int value) { renderWidgetWidth = value; }
	void updateRenderWidgetHeight(int value) { renderWidgetHeight = value; }

	int getXScrollbar() { return xScrollbar; }
	int getYScrollbar() { return yScrollbar; }

	int getRenderWidghetWidth() { return renderWidgetWidth; }
	int getRenderWidgetHeight() { return renderWidgetHeight; }
private:
	void load_textures();

	std::shared_ptr<Map> map;

	//environment textures
	std::map<Tile_Type,std::shared_ptr<QImage>> ground_textures;
	//enemy Textures
	std::map<Enemy_Type,std::shared_ptr<QImage>> enemy_textures;
	//player as special entity
	std::map<Player_Textures, std::shared_ptr<QImage>> player_textures;

	int xScrollbar;
	int yScrollbar;
	int renderWidgetWidth;
	int renderWidgetHeight;
};

#endif
