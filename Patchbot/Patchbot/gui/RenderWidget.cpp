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


	auto textures = m_gameController->getTextures();
	QPainter p(this);

	int i = 0;
	for (auto it = textures.begin();  it != textures.end(); ++it,++i) {
		p.drawImage(QPoint(i * 55, 0), *(it->second));
	}

		
}