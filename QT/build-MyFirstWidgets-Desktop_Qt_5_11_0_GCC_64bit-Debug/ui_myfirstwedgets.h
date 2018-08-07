/********************************************************************************
** Form generated from reading UI file 'myfirstwedgets.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFIRSTWEDGETS_H
#define UI_MYFIRSTWEDGETS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyFirstWedgets
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyFirstWedgets)
    {
        if (MyFirstWedgets->objectName().isEmpty())
            MyFirstWedgets->setObjectName(QStringLiteral("MyFirstWedgets"));
        MyFirstWedgets->resize(400, 300);
        centralWidget = new QWidget(MyFirstWedgets);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 20, 89, 25));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 110, 351, 25));
        MyFirstWedgets->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyFirstWedgets);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 28));
        MyFirstWedgets->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyFirstWedgets);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MyFirstWedgets->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MyFirstWedgets);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MyFirstWedgets->setStatusBar(statusBar);

        retranslateUi(MyFirstWedgets);

        QMetaObject::connectSlotsByName(MyFirstWedgets);
    } // setupUi

    void retranslateUi(QMainWindow *MyFirstWedgets)
    {
        MyFirstWedgets->setWindowTitle(QApplication::translate("MyFirstWedgets", "MyFirstWedgets", nullptr));
        pushButton->setText(QApplication::translate("MyFirstWedgets", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyFirstWedgets: public Ui_MyFirstWedgets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFIRSTWEDGETS_H
