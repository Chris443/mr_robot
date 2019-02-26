#ifndef H_PATCHBOT_RENDER_WIDGET
#define H_PATCHBOT_RENDER_WIDGET

#include <qwidget>
#include <qpainter.h>
#include "GameController.h"

class RenderWidget : public QWidget
{
	Q_OBJECT

public:
	RenderWidget(QWidget *parent = 0);
	void set_Controller(std::shared_ptr<GameController> gameController);
	~RenderWidget();
protected:
	void paintEvent(QPaintEvent * event);

	std::shared_ptr<GameController> m_gameController;

	const int tileSize = 32;
};

#endif