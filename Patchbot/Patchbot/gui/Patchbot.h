#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Patchbot.h"
#include "GameController.h"

class Patchbot : public QMainWindow 
{
	Q_OBJECT

public:
	Patchbot(QWidget *parent = Q_NULLPTR);

private:
	Ui::PatchbotClass ui;

	void resizeEvent(QResizeEvent* event);

	void paintEvent(QPaintEvent *event);
	std::shared_ptr<GameController> m_gameController;
private slots:
	//scrollbars
	void xScrollbarMoved(int val);
	void yScrollbarMoved(int val);
	//Colony Slots
	void change_Colony();
	//Programming Slots
	void left_Arrow_clicked();
	void right_Arrow_clicked();
	void down_Arrow_clicked();
	void up_Arrow_clicked();
	void wait_Arrow_clicked();
	void return_Arrow_clicked();
	void dropdown();
	void textfield();
	//Programming Slots
	void mission_start();
	void cancel();
	void single_step();
	void automate();
	void stop();

};
