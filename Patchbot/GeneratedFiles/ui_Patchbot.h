/********************************************************************************
** Form generated from reading UI file 'Patchbot.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATCHBOT_H
#define UI_PATCHBOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatchbotClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PatchbotClass)
    {
        if (PatchbotClass->objectName().isEmpty())
            PatchbotClass->setObjectName(QString::fromUtf8("PatchbotClass"));
        PatchbotClass->resize(600, 400);
        menuBar = new QMenuBar(PatchbotClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        PatchbotClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PatchbotClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        PatchbotClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(PatchbotClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        PatchbotClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(PatchbotClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        PatchbotClass->setStatusBar(statusBar);

        retranslateUi(PatchbotClass);

        QMetaObject::connectSlotsByName(PatchbotClass);
    } // setupUi

    void retranslateUi(QMainWindow *PatchbotClass)
    {
        PatchbotClass->setWindowTitle(QApplication::translate("PatchbotClass", "Patchbot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatchbotClass: public Ui_PatchbotClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATCHBOT_H
