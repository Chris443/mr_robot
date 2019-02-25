#include "Patchbot.h"
#include <iostream>
#include <QResizeEvent>

Patchbot::Patchbot(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//ui.leftButton->resize();
	this->setWindowTitle("PatchBot 1.0V");

	//Colony connect
	//connect(ui.leftButton, SIGNAL(pressed()), this, SLOT(left_Arrow_clicked()));
	//Programming connect
	connect(ui.leftButton, SIGNAL(pressed()),this, SLOT(left_Arrow_clicked()));
	connect(ui.rightButton, SIGNAL(pressed()), this, SLOT(right_Arrow_clicked()));
	connect(ui.downButton, SIGNAL(pressed()), this, SLOT(down_Arrow_clicked()));
	connect(ui.upButton, SIGNAL(pressed()), this, SLOT(up_Arrow_clicked()));
	connect(ui.waitButton, SIGNAL(pressed()), this, SLOT(wait_Arrow_clicked()));
	connect(ui.removeButton, SIGNAL(pressed()), this, SLOT(return_Arrow_clicked()));
	connect(ui.repetitionBox, SIGNAL(pressed()), this, SLOT(dropdown()));
	connect(ui.programLine, SIGNAL(pressed()), this, SLOT(textfield()));
	//Programming connect
	connect(ui.startButton, SIGNAL(pressed()), this, SLOT(mission_start()));
	connect(ui.cancelButton, SIGNAL(pressed()), this, SLOT(cancel()));
	connect(ui.singleStepButton, SIGNAL(pressed()), this, SLOT(single_step()));
	connect(ui.automateButton, SIGNAL(pressed()), this, SLOT(automate()));
	connect(ui.stopButton, SIGNAL(pressed()), this, SLOT(stop()));

	//this->resizeEvent

	this->setMinimumSize(1057, 580);
	//ui.scrollArea->
}

void Patchbot::resizeEvent(QResizeEvent* event) {
	QMainWindow::resizeEvent(event);
	//ui.scrollArea->resizeEvent(event);

	QSize oldSize = event->oldSize();
	QSize newSize = event->size();

	//ui.ProgrammierBox->sizeHint();
	int wMultiplikator = oldSize.width()/newSize.width();
	int hMultiplikator = oldSize.height() / newSize.height();
	//ui.ProgrammierBox->resize(ui.ProgrammierBox->width() * wMultiplikator, ui.ProgrammierBox->height()*hMultiplikator);
	/*
	ui.scrollArea->resize(ui.scrollArea->width() * wMultiplikator, ui.scrollArea->height() * hMultiplikator);
	ui.horizontalScrollBar->resize(ui.horizontalScrollBar->width() * wMultiplikator,ui.horizontalScrollBar->height());*/
	//ui.scrollbar
}

void Patchbot::left_Arrow_clicked() {

}

void Patchbot::right_Arrow_clicked() {

}

void Patchbot::down_Arrow_clicked() {

}

void Patchbot::up_Arrow_clicked() {

}

void Patchbot::wait_Arrow_clicked() {

}

void Patchbot::return_Arrow_clicked() {

}

void Patchbot::change_Colony() {

}

void Patchbot::dropdown() {

}
void Patchbot::textfield() {

}

void Patchbot::mission_start() {

}
void Patchbot::cancel() {

}
void Patchbot::single_step() {

}
void Patchbot::automate() {

}
void Patchbot::stop() {

}