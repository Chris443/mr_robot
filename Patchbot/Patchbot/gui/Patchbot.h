#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Patchbot.h"

class Patchbot : public QMainWindow
{
	Q_OBJECT

public:
	Patchbot(QWidget *parent = Q_NULLPTR);

private:
	Ui::PatchbotClass ui;
};
