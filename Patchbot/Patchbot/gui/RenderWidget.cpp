#include "RenderWidget.h"



RenderWidget::RenderWidget(QWidget *parent)
	:QWidget(parent)
{
}


RenderWidget::~RenderWidget()
{
}

void RenderWidget::set_Controller(std::shared_ptr<GameController> gameController) {
	m_gameController = gameController;
}



void RenderWidget::paintEvent(QPaintEvent *event) {
	auto map = m_gameController->getMap();

	auto ground_textures = m_gameController->get_Ground_Textures();
	QPainter p(this);

	//values for culling
	float xmin_render_pos = m_gameController->getXScrollbar(); //bar in % 1 bis 100
	xmin_render_pos = (xmin_render_pos /100) * (map->getMap()[0].size());		//hack: width/height dont change over lines

	float ymin_render_pos = m_gameController->getYScrollbar(); //bar in % 1 bis 100
	ymin_render_pos = (ymin_render_pos / 100) * (map->getMap().size());	

	int xmax = m_gameController->getRenderWidghetWidth();
	xmax = xmax / tileSize;
	int ymax = m_gameController->getRenderWidgetHeight();
	ymax = ymax / tileSize;

	int xr = 0;
	int yr = 0;
	for (int y = 0; y < map->getMap().size(); ++y) {
		if (y < static_cast<int>(ymin_render_pos)) continue;
		for (int x = 0; x < map->getMap()[y].size(); ++x) {

			if (xr > xmax) break;
			if (x < static_cast<int>(xmin_render_pos)) continue;
			

			auto texture = ground_textures.find(map->getMap()[y][x].m_tileType);
			p.drawImage(QPoint(xr*tileSize, yr*tileSize), *texture->second);


			/*
			render robots
			*/


			xr++;
		}
		xr = 0;
		yr++;
		if (yr > ymax) { break; }
	}
		
}

 