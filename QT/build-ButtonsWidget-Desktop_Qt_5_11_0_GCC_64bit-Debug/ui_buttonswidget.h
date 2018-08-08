/********************************************************************************
** Form generated from reading UI file 'buttonswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONSWIDGET_H
#define UI_BUTTONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ButtonsWidget
{
public:
    QPushButton *pushButton;
    QToolButton *toolButton;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QCheckBox *check_flat;
    QSpinBox *spinBox;

    void setupUi(QWidget *ButtonsWidget)
    {
        if (ButtonsWidget->objectName().isEmpty())
            ButtonsWidget->setObjectName(QStringLiteral("ButtonsWidget"));
        ButtonsWidget->resize(600, 600);
        pushButton = new QPushButton(ButtonsWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 100, 161, 61));
        toolButton = new QToolButton(ButtonsWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(310, 330, 161, 61));
        radioButton = new QRadioButton(ButtonsWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(80, 220, 112, 23));
        radioButton_2 = new QRadioButton(ButtonsWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(300, 240, 112, 23));
        radioButton_2->setChecked(true);
        check_flat = new QCheckBox(ButtonsWidget);
        check_flat->setObjectName(QStringLiteral("check_flat"));
        check_flat->setGeometry(QRect(80, 340, 92, 23));
        check_flat->setChecked(true);
        spinBox = new QSpinBox(ButtonsWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(80, 100, 131, 31));

        retranslateUi(ButtonsWidget);

        QMetaObject::connectSlotsByName(ButtonsWidget);
    } // setupUi

    void retranslateUi(QWidget *ButtonsWidget)
    {
        ButtonsWidget->setWindowTitle(QApplication::translate("ButtonsWidget", "ButtonsWidget", nullptr));
        pushButton->setText(QApplication::translate("ButtonsWidget", "PushButton", nullptr));
        toolButton->setText(QApplication::translate("ButtonsWidget", "\345\267\245\345\205\267\346\240\217", nullptr));
        radioButton->setText(QApplication::translate("ButtonsWidget", "RadioButton", nullptr));
        radioButton_2->setText(QApplication::translate("ButtonsWidget", "RadioButton", nullptr));
        check_flat->setText(QApplication::translate("ButtonsWidget", "CheckBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ButtonsWidget: public Ui_ButtonsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONSWIDGET_H
