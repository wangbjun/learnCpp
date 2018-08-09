/********************************************************************************
** Form generated from reading UI file 'mainwindowmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWMENU_H
#define UI_MAINWINDOWMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowMenu
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QCheckBox *checkBox_tips;
    QCheckBox *checkBox_tear;
    QCheckBox *checkBox_sep;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowMenu)
    {
        if (MainWindowMenu->objectName().isEmpty())
            MainWindowMenu->setObjectName(QStringLiteral("MainWindowMenu"));
        MainWindowMenu->resize(403, 306);
        centralWidget = new QWidget(MainWindowMenu);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        checkBox_tips = new QCheckBox(centralWidget);
        checkBox_tips->setObjectName(QStringLiteral("checkBox_tips"));

        gridLayout->addWidget(checkBox_tips, 0, 0, 1, 1);

        checkBox_tear = new QCheckBox(centralWidget);
        checkBox_tear->setObjectName(QStringLiteral("checkBox_tear"));

        gridLayout->addWidget(checkBox_tear, 1, 0, 1, 1);

        checkBox_sep = new QCheckBox(centralWidget);
        checkBox_sep->setObjectName(QStringLiteral("checkBox_sep"));

        gridLayout->addWidget(checkBox_sep, 2, 0, 1, 1);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 3, 0, 1, 1);

        MainWindowMenu->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowMenu);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 403, 28));
        MainWindowMenu->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindowMenu);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindowMenu->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindowMenu);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindowMenu->setStatusBar(statusBar);

        retranslateUi(MainWindowMenu);

        QMetaObject::connectSlotsByName(MainWindowMenu);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowMenu)
    {
        MainWindowMenu->setWindowTitle(QApplication::translate("MainWindowMenu", "MainWindowMenu", Q_NULLPTR));
        checkBox_tips->setText(QApplication::translate("MainWindowMenu", "toolTipsVisiable", Q_NULLPTR));
        checkBox_tear->setText(QApplication::translate("MainWindowMenu", "tearOffEnabled", Q_NULLPTR));
        checkBox_sep->setText(QApplication::translate("MainWindowMenu", "sepCollapse", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowMenu: public Ui_MainWindowMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWMENU_H
