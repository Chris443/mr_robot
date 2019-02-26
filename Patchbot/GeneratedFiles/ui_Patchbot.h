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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "RenderWidget.h"

QT_BEGIN_NAMESPACE

class Ui_PatchbotClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QWidget *gameWindow;
    QGridLayout *gridLayout;
    QScrollBar *yScrollbar;
    QScrollBar *xScrollbar;
    RenderWidget *game;
    QPushButton *changeColony;
    QLabel *label_2;
    QWidget *programmingWidget;
    QGridLayout *gridLayout_4;
    QComboBox *repetitionBox;
    QPushButton *leftButton;
    QPushButton *downButton;
    QPushButton *rightButton;
    QPushButton *removeButton;
    QPushButton *waitButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *upButton;
    QVBoxLayout *currentProgramLayout;
    QSpacerItem *verticalSpacer;
    QLineEdit *programLine;
    QScrollBar *programBar;
    QLabel *programmText;
    QWidget *widget;
    QGridLayout *gridLayout_5;
    QPushButton *startButton;
    QPushButton *cancelButton;
    QPushButton *automateButton;
    QPushButton *stopButton;
    QLabel *label;
    QPushButton *singleStepButton;
    QSpacerItem *verticalSpacer_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PatchbotClass)
    {
        if (PatchbotClass->objectName().isEmpty())
            PatchbotClass->setObjectName(QString::fromUtf8("PatchbotClass"));
        PatchbotClass->resize(800, 676);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PatchbotClass->sizePolicy().hasHeightForWidth());
        PatchbotClass->setSizePolicy(sizePolicy);
        PatchbotClass->setMinimumSize(QSize(800, 600));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(105, 220, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        PatchbotClass->setPalette(palette);
        centralWidget = new QWidget(PatchbotClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush2(QColor(105, 220, 255, 100));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        centralWidget->setPalette(palette1);
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gameWindow = new QWidget(centralWidget);
        gameWindow->setObjectName(QString::fromUtf8("gameWindow"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gameWindow->sizePolicy().hasHeightForWidth());
        gameWindow->setSizePolicy(sizePolicy1);
        QPalette palette2;
        QBrush brush3(QColor(60, 112, 208, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        gameWindow->setPalette(palette2);
        gameWindow->setStyleSheet(QString::fromUtf8("border: 1px solid #000000;"));
        gridLayout = new QGridLayout(gameWindow);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        yScrollbar = new QScrollBar(gameWindow);
        yScrollbar->setObjectName(QString::fromUtf8("yScrollbar"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(yScrollbar->sizePolicy().hasHeightForWidth());
        yScrollbar->setSizePolicy(sizePolicy2);
        yScrollbar->setOrientation(Qt::Vertical);

        gridLayout->addWidget(yScrollbar, 0, 1, 1, 1);

        xScrollbar = new QScrollBar(gameWindow);
        xScrollbar->setObjectName(QString::fromUtf8("xScrollbar"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(xScrollbar->sizePolicy().hasHeightForWidth());
        xScrollbar->setSizePolicy(sizePolicy3);
        xScrollbar->setMinimumSize(QSize(0, 25));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush);
        QBrush brush4(QColor(95, 143, 231, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush4);
        QBrush brush5(QColor(30, 56, 104, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush5);
        QBrush brush6(QColor(40, 74, 139, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush3);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        QBrush brush9(QColor(60, 112, 208, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        xScrollbar->setPalette(palette3);
        xScrollbar->setStyleSheet(QString::fromUtf8("color: rgb(60, 112, 208);"));
        xScrollbar->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(xScrollbar, 1, 0, 1, 1);

        game = new RenderWidget(gameWindow);
        game->setObjectName(QString::fromUtf8("game"));
        sizePolicy.setHeightForWidth(game->sizePolicy().hasHeightForWidth());
        game->setSizePolicy(sizePolicy);

        gridLayout->addWidget(game, 0, 0, 1, 1);


        gridLayout_3->addWidget(gameWindow, 2, 0, 4, 1);

        changeColony = new QPushButton(centralWidget);
        changeColony->setObjectName(QString::fromUtf8("changeColony"));
        changeColony->setMinimumSize(QSize(100, 25));
        changeColony->setMaximumSize(QSize(100, 25));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush10(QColor(255, 255, 255, 128));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        QBrush brush11(QColor(120, 120, 120, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        QBrush brush12(QColor(0, 0, 0, 128));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        changeColony->setPalette(palette4);
        changeColony->setLayoutDirection(Qt::LeftToRight);
        changeColony->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 112, 208);\n"
"border:2px solid #000000;"));

        gridLayout_3->addWidget(changeColony, 0, 2, 1, 1, Qt::AlignRight);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        programmingWidget = new QWidget(centralWidget);
        programmingWidget->setObjectName(QString::fromUtf8("programmingWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(programmingWidget->sizePolicy().hasHeightForWidth());
        programmingWidget->setSizePolicy(sizePolicy4);
        programmingWidget->setMinimumSize(QSize(300, 0));
        programmingWidget->setMaximumSize(QSize(300, 16777215));
        programmingWidget->setStyleSheet(QString::fromUtf8("background-color: #69dcff;\n"
"border:1px solid #000000;"));
        gridLayout_4 = new QGridLayout(programmingWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_4->setContentsMargins(10, 10, 10, 10);
        repetitionBox = new QComboBox(programmingWidget);
        repetitionBox->setObjectName(QString::fromUtf8("repetitionBox"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(repetitionBox->sizePolicy().hasHeightForWidth());
        repetitionBox->setSizePolicy(sizePolicy5);
        repetitionBox->setMinimumSize(QSize(50, 30));
        repetitionBox->setMaximumSize(QSize(16777215, 30));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        repetitionBox->setPalette(palette5);
        repetitionBox->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 112, 208);\n"
"border:2px solid #000000;"));
        repetitionBox->setEditable(true);

        gridLayout_4->addWidget(repetitionBox, 2, 5, 1, 1);

        leftButton = new QPushButton(programmingWidget);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setMinimumSize(QSize(40, 40));
        leftButton->setMaximumSize(QSize(40, 40));
        leftButton->setBaseSize(QSize(0, 0));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        QBrush brush13(QColor(0, 120, 215, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        leftButton->setPalette(palette6);
        leftButton->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 112, 208);\n"
"border:2px solid #000000;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Patchbot/pfeile/pfeil_links.tga"), QSize(), QIcon::Normal, QIcon::Off);
        leftButton->setIcon(icon);
        leftButton->setIconSize(QSize(32, 32));

        gridLayout_4->addWidget(leftButton, 3, 0, 1, 1);

        downButton = new QPushButton(programmingWidget);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        downButton->setPalette(palette7);
        downButton->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 112, 208);\n"
"border:2px solid #000000;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Patchbot/pfeile/pfeil_unten.tga"), QSize(), QIcon::Normal, QIcon::Off);
        downButton->setIcon(icon1);
        downButton->setIconSize(QSize(32, 32));

        gridLayout_4->addWidget(downButton, 4, 1, 1, 1);

        rightButton = new QPushButton(programmingWidget);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setMinimumSize(QSize(40, 40));
        rightButton->setMaximumSize(QSize(40, 40));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        rightButton->setPalette(palette8);
        rightButton->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 112, 208);\n"
"border:2px solid #000000;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Patchbot/pfeile/pfeil_rechts.tga"), QSize(), QIcon::Normal, QIcon::Off);
        rightButton->setIcon(icon2);
        rightButton->setIconSize(QSize(32, 32));

        gridLayout_4->addWidget(rightButton, 3, 3, 1, 1);

        removeButton = new QPushButton(programmingWidget);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setMinimumSize(QSize(40, 40));
        removeButton->setMaximumSize(QSize(40, 40));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        removeButton->setPalette(palette9);
        removeButton->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 112, 208);\n"
"border:2px solid #000000;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Patchbot/pfeile/backArrow.tga"), QSize(), QIcon::Normal, QIcon::Off);
        removeButton->setIcon(icon3);
        removeButton->setIconSize(QSize(32, 32));

        gridLayout_4->addWidget(removeButton, 2, 3, 1, 1);

        waitButton = new QPushButton(programmingWidget);
        waitButton->setObjectName(QString::fromUtf8("waitButton"));
        waitButton->setMinimumSize(QSize(40, 40));
        waitButton->setMaximumSize(QSize(40, 40));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        waitButton->setPalette(palette10);
        waitButton->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 112, 208);\n"
"border:2px solid #000000;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Patchbot/pfeile/waitCircle.tga"), QSize(), QIcon::Normal, QIcon::Off);
        waitButton->setIcon(icon4);
        waitButton->setIconSize(QSize(32, 32));

        gridLayout_4->addWidget(waitButton, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 2, 4, 1, 1);

        upButton = new QPushButton(programmingWidget);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        upButton->setMinimumSize(QSize(40, 40));
        upButton->setMaximumSize(QSize(40, 40));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        upButton->setPalette(palette11);
        upButton->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 112, 208);\n"
"border:2px solid #000000;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Patchbot/pfeile/pfeil_oben.tga"), QSize(), QIcon::Normal, QIcon::Off);
        upButton->setIcon(icon5);
        upButton->setIconSize(QSize(32, 32));

        gridLayout_4->addWidget(upButton, 2, 1, 1, 1);

        currentProgramLayout = new QVBoxLayout();
        currentProgramLayout->setSpacing(0);
        currentProgramLayout->setObjectName(QString::fromUtf8("currentProgramLayout"));
        currentProgramLayout->setContentsMargins(0, -1, -1, -1);
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        currentProgramLayout->addItem(verticalSpacer);

        programLine = new QLineEdit(programmingWidget);
        programLine->setObjectName(QString::fromUtf8("programLine"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(programLine->sizePolicy().hasHeightForWidth());
        programLine->setSizePolicy(sizePolicy6);
        programLine->setMinimumSize(QSize(80, 40));
        programLine->setMaximumSize(QSize(16777215, 40));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette12.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette12.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        programLine->setPalette(palette12);
        QFont font1;
        font1.setUnderline(true);
        programLine->setFont(font1);
        programLine->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 112, 208);\n"
"border:2px solid #000000;"));

        currentProgramLayout->addWidget(programLine);

        programBar = new QScrollBar(programmingWidget);
        programBar->setObjectName(QString::fromUtf8("programBar"));
        sizePolicy6.setHeightForWidth(programBar->sizePolicy().hasHeightForWidth());
        programBar->setSizePolicy(sizePolicy6);
        programBar->setMinimumSize(QSize(0, 20));
        programBar->setMaximumSize(QSize(16777215, 20));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette13.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette13.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette13.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        programBar->setPalette(palette13);
        programBar->setStyleSheet(QString::fromUtf8(""));
        programBar->setOrientation(Qt::Horizontal);

        currentProgramLayout->addWidget(programBar);


        gridLayout_4->addLayout(currentProgramLayout, 3, 5, 2, 1);

        programmText = new QLabel(programmingWidget);
        programmText->setObjectName(QString::fromUtf8("programmText"));
        sizePolicy3.setHeightForWidth(programmText->sizePolicy().hasHeightForWidth());
        programmText->setSizePolicy(sizePolicy3);
        programmText->setMinimumSize(QSize(0, 20));
        programmText->setMaximumSize(QSize(16777215, 20));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        programmText->setPalette(palette14);
        programmText->setFont(font);
        programmText->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(programmText, 1, 0, 1, 6);


        gridLayout_3->addWidget(programmingWidget, 2, 2, 1, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy4.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy4);
        widget->setMinimumSize(QSize(305, 0));
        widget->setMaximumSize(QSize(305, 16777215));
        widget->setStyleSheet(QString::fromUtf8("background-color: #69dcff;\n"
"border:1px solid #000000;"));
        gridLayout_5 = new QGridLayout(widget);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        startButton = new QPushButton(widget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setMinimumSize(QSize(130, 40));
        startButton->setMaximumSize(QSize(16777215, 50));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette15.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette15.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        startButton->setPalette(palette15);
        startButton->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 112, 208);\n"
"border:2px solid #000000;"));

        gridLayout_5->addWidget(startButton, 2, 1, 1, 1);

        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(130, 40));
        cancelButton->setMaximumSize(QSize(16777215, 50));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette16.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette16.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette16.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette16.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        cancelButton->setPalette(palette16);
        cancelButton->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 112, 208);\n"
"border:2px solid #000000;"));

        gridLayout_5->addWidget(cancelButton, 2, 2, 1, 1);

        automateButton = new QPushButton(widget);
        automateButton->setObjectName(QString::fromUtf8("automateButton"));
        automateButton->setMinimumSize(QSize(130, 40));
        automateButton->setMaximumSize(QSize(16777215, 50));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette17.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette17.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        automateButton->setPalette(palette17);
        automateButton->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 112, 208);\n"
"border:2px solid #000000;"));

        gridLayout_5->addWidget(automateButton, 3, 2, 1, 1);

        stopButton = new QPushButton(widget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setMinimumSize(QSize(130, 40));
        stopButton->setMaximumSize(QSize(16777215, 50));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette18.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette18.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette18.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette18.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        stopButton->setPalette(palette18);
        stopButton->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 112, 208);\n"
"border:2px solid #000000;"));

        gridLayout_5->addWidget(stopButton, 4, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy7(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy7);
        label->setMinimumSize(QSize(0, 30));
        label->setMaximumSize(QSize(16777215, 30));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);

        gridLayout_5->addWidget(label, 1, 1, 1, 2);

        singleStepButton = new QPushButton(widget);
        singleStepButton->setObjectName(QString::fromUtf8("singleStepButton"));
        singleStepButton->setMinimumSize(QSize(130, 40));
        singleStepButton->setMaximumSize(QSize(16777215, 50));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette19.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette19.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette19.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette19.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        singleStepButton->setPalette(palette19);
        singleStepButton->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 112, 208);\n"
"border:2px solid #000000;"));

        gridLayout_5->addWidget(singleStepButton, 3, 1, 1, 1);


        gridLayout_3->addWidget(widget, 4, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_3, 3, 2, 1, 1);

        PatchbotClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(PatchbotClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        PatchbotClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PatchbotClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        PatchbotClass->setStatusBar(statusBar);

        retranslateUi(PatchbotClass);

        QMetaObject::connectSlotsByName(PatchbotClass);
    } // setupUi

    void retranslateUi(QMainWindow *PatchbotClass)
    {
        PatchbotClass->setWindowTitle(QApplication::translate("PatchbotClass", "Patchbot", nullptr));
        changeColony->setText(QApplication::translate("PatchbotClass", "Andere Kolonie...", nullptr));
        label_2->setText(QApplication::translate("PatchbotClass", "Aktuelle Kolonie:", nullptr));
        repetitionBox->setCurrentText(QApplication::translate("PatchbotClass", "1x", nullptr));
        leftButton->setText(QString());
        downButton->setText(QString());
        rightButton->setText(QString());
        removeButton->setText(QString());
        waitButton->setText(QString());
        upButton->setText(QString());
        programmText->setText(QApplication::translate("PatchbotClass", "Programmieren", nullptr));
        startButton->setText(QApplication::translate("PatchbotClass", "Start", nullptr));
        cancelButton->setText(QApplication::translate("PatchbotClass", "Abbruch", nullptr));
        automateButton->setText(QApplication::translate("PatchbotClass", "Automatik", nullptr));
        stopButton->setText(QApplication::translate("PatchbotClass", "Anhalten", nullptr));
        label->setText(QApplication::translate("PatchbotClass", "Missionsablauf", nullptr));
        singleStepButton->setText(QApplication::translate("PatchbotClass", "Einzelschritt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatchbotClass: public Ui_PatchbotClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATCHBOT_H
