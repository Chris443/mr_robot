#include "Patchbot.h"
#include <iostream>
#include <QResizeEvent>

Patchbot::Patchbot(QWidget *parent)
	: QMainWindow(parent),
	m_gameController(std::make_shared<GameController>())
{
	ui.setupUi(this);
	this->setWindowTitle("PatchBot 1.0V");
	ui.singleStepButton->setDisabled(true);
	ui.automateButton->setDisabled(true);
	ui.cancelButton->setDisabled(true);
	ui.stopButton->setDisabled(true);

	m_timer = std::make_shared<QTimer>();
	
	for (int i = 1; i < 5; ++i) {
		ui.repetitionBox->insertItem(i, QString::number(i) + "x");
	}
	//scrollbars
	connect(ui.xScrollbar, SIGNAL(valueChanged(int)), this, SLOT(xScrollbarMoved(int)));
	connect(ui.yScrollbar, SIGNAL(valueChanged(int)), this, SLOT(yScrollbarMoved(int)));
	//Colony connect

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
	connect(m_timer.get(), SIGNAL(timeout()),	this, SLOT(automate_update()));

	ui.game->set_Controller(m_gameController);

	this->setMinimumSize(1057, 580);
}

void Patchbot::resizeEvent(QResizeEvent* event) {
	m_gameController->updateRenderWidgetHeight(ui.game->height());
	m_gameController->updateRenderWidgetWidth(ui.game->width());
}

void Patchbot::paintEvent(QPaintEvent *event) {
	//@TODO: first frame is wrong, change somehow here 
	m_gameController->updateRenderWidgetHeight(ui.game->height());
	m_gameController->updateRenderWidgetWidth(ui.game->width());
}

void Patchbot::left_Arrow_clicked() {
	m_gameController->appendProgrammCommand("L" + std::to_string(ui.repetitionBox->currentIndex()+1));
	ui.programLine->setText(m_gameController->getProgrammCommands().c_str());
}

void Patchbot::right_Arrow_clicked() {
	m_gameController->appendProgrammCommand("R" + std::to_string(ui.repetitionBox->currentIndex() + 1));
	ui.programLine->setText(m_gameController->getProgrammCommands().c_str());
}

void Patchbot::down_Arrow_clicked() {
	m_gameController->appendProgrammCommand("D" + std::to_string(ui.repetitionBox->currentIndex() + 1));
	ui.programLine->setText(m_gameController->getProgrammCommands().c_str());
}

void Patchbot::up_Arrow_clicked() {
	m_gameController->appendProgrammCommand("U" + std::to_string(ui.repetitionBox->currentIndex() + 1));
	ui.programLine->setText(m_gameController->getProgrammCommands().c_str());
}

void Patchbot::wait_Arrow_clicked() {
	m_gameController->appendProgrammCommand("W" + std::to_string(ui.repetitionBox->currentIndex() + 1));
	ui.programLine->setText(m_gameController->getProgrammCommands().c_str());
}

void Patchbot::return_Arrow_clicked() {
	m_gameController->deleteProgrammCommand();
	ui.programLine->setText(m_gameController->getProgrammCommands().c_str());
}

void Patchbot::change_Colony() {

}

void Patchbot::dropdown() {

}
void Patchbot::textfield() {

	//m_gameController->
}

void Patchbot::mission_start() {
	ui.singleStepButton->setDisabled(false);
	ui.automateButton->setDisabled(false);
	ui.cancelButton->setDisabled(false);
	ui.startButton->setDisabled(true);
}
void Patchbot::cancel() {
	ui.singleStepButton->setDisabled(true);
	ui.automateButton->setDisabled(true);
	ui.cancelButton->setDisabled(true);
	ui.startButton->setDisabled(false);
	ui.stopButton->setDisabled(true);
	//reload/restart game

	m_timer->stop();
	m_gameController->reset();
	ui.programLine->clear();
	ui.game->update();
}
void Patchbot::single_step() {
	m_gameController->singleStep();
	ui.programLine->setText(m_gameController->getProgrammCommands().c_str());
	ui.game->update();
}
void Patchbot::automate() {
	ui.automateButton->setDisabled(true);
	ui.singleStepButton->setDisabled(true);
	ui.stopButton->setDisabled(false);

	m_timer->start(1000);
}

void Patchbot::automate_update() {
	single_step();
}

void Patchbot::stop() {
	ui.automateButton->setDisabled(false);
	ui.singleStepButton->setDisabled(false);
	ui.stopButton->setDisabled(true);
	m_timer->stop();
}
void Patchbot::xScrollbarMoved(int val) {
	m_gameController->updateXScrollbar(val);
	ui.game->update();
}
void Patchbot::yScrollbarMoved(int val) {
	m_gameController->updateYScrollbar(val);
	ui.game->update();
}