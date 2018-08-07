/********************************************************************************
** Form generated from reading UI file 'signalsandslotswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNALSANDSLOTSWIDGET_H
#define UI_SIGNALSANDSLOTSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignalsAndSlotsWidget
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QScrollBar *horizontalScrollBar;
    QLabel *label;
    QProgressBar *progressBar;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SignalsAndSlotsWidget)
    {
        if (SignalsAndSlotsWidget->objectName().isEmpty())
            SignalsAndSlotsWidget->setObjectName(QStringLiteral("SignalsAndSlotsWidget"));
        SignalsAndSlotsWidget->resize(400, 300);
        centralWidget = new QWidget(SignalsAndSlotsWidget);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 0, 113, 25));
        horizontalScrollBar = new QScrollBar(centralWidget);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(220, 90, 160, 16));
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 40, 67, 17));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(40, 160, 118, 23));
        progressBar->setValue(24);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 160, 89, 25));
        pushButton->setCheckable(true);
        pushButton->setChecked(true);
        SignalsAndSlotsWidget->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SignalsAndSlotsWidget);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 28));
        SignalsAndSlotsWidget->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SignalsAndSlotsWidget);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SignalsAndSlotsWidget->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SignalsAndSlotsWidget);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SignalsAndSlotsWidget->setStatusBar(statusBar);

        retranslateUi(SignalsAndSlotsWidget);
        QObject::connect(pushButton, SIGNAL(clicked(bool)), progressBar, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(SignalsAndSlotsWidget);
    } // setupUi

    void retranslateUi(QMainWindow *SignalsAndSlotsWidget)
    {
        SignalsAndSlotsWidget->setWindowTitle(QApplication::translate("SignalsAndSlotsWidget", "SignalsAndSlotsWidget", nullptr));
        label->setText(QApplication::translate("SignalsAndSlotsWidget", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("SignalsAndSlotsWidget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignalsAndSlotsWidget: public Ui_SignalsAndSlotsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNALSANDSLOTSWIDGET_H
