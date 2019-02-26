#ifndef H_PATCHBOT_GAME_CONTROLLER
#define H_PATCHBOT_GAME_CONTROLLER
#include <string>
#include <vector>

#include <qimage.h>

#include "../Resources/TGA_Image.h"
#include "../Resources//MapData.h"

class GameController
{
public:
	GameController();
	~GameController();

	std::map<Tile_Type, std::shared_ptr<QImage>> getTextures() {return ground_textures;};
private:
	void load_textures();

	//put into map?
	std::map<Tile_Type,std::shared_ptr<QImage>> ground_textures;
	std::vector<TGA_Image> enemy_textures;
};

#endif
