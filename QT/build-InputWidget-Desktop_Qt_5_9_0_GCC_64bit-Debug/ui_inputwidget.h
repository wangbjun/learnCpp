/********************************************************************************
** Form generated from reading UI file 'inputwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTWIDGET_H
#define UI_INPUTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputWidget
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout_2;
    QLabel *label;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QComboBox *comboBox_3;
    QLabel *label_5;
    QComboBox *comboBox_4;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QWidget *tab_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QSpinBox *spinBox;
    QLabel *label_11;
    QComboBox *comboBox_5;
    QLabel *label_9;
    QLabel *label_10;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_2;
    QCheckBox *checkBox_3;
    QLabel *label_8;
    QCheckBox *checkBox_4;
    QLabel *label_12;
    QComboBox *comboBox_6;
    QTextEdit *textEdit;

    void setupUi(QWidget *InputWidget)
    {
        if (InputWidget->objectName().isEmpty())
            InputWidget->setObjectName(QStringLiteral("InputWidget"));
        InputWidget->resize(657, 460);
        tabWidget = new QTabWidget(InputWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(70, 70, 501, 331));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        formLayoutWidget = new QWidget(tab);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(19, 20, 461, 262));
        formLayout_2 = new QFormLayout(formLayoutWidget);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setRowWrapPolicy(QFormLayout::DontWrapRows);
        formLayout_2->setHorizontalSpacing(10);
        formLayout_2->setVerticalSpacing(10);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        checkBox = new QCheckBox(formLayoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, checkBox);

        checkBox_2 = new QCheckBox(formLayoutWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, checkBox_2);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_2);

        comboBox = new QComboBox(formLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, comboBox);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_3);

        comboBox_2 = new QComboBox(formLayoutWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, comboBox_2);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_4);

        comboBox_3 = new QComboBox(formLayoutWidget);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, comboBox_3);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_5);

        comboBox_4 = new QComboBox(formLayoutWidget);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, comboBox_4);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_6);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, lineEdit_2);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayoutWidget = new QWidget(tab_2);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 180, 461, 123));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        spinBox = new QSpinBox(gridLayoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        gridLayout_2->addWidget(spinBox, 0, 1, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 2, 2, 1, 1);

        comboBox_5 = new QComboBox(gridLayoutWidget);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        gridLayout_2->addWidget(comboBox_5, 1, 3, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 1, 0, 1, 1);

        spinBox_3 = new QSpinBox(gridLayoutWidget);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));

        gridLayout_2->addWidget(spinBox_3, 2, 1, 1, 1);

        spinBox_2 = new QSpinBox(gridLayoutWidget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));

        gridLayout_2->addWidget(spinBox_2, 1, 1, 1, 1);

        checkBox_3 = new QCheckBox(gridLayoutWidget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        gridLayout_2->addWidget(checkBox_3, 0, 2, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        checkBox_4 = new QCheckBox(gridLayoutWidget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        gridLayout_2->addWidget(checkBox_4, 0, 3, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 1, 2, 1, 1);

        comboBox_6 = new QComboBox(gridLayoutWidget);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));

        gridLayout_2->addWidget(comboBox_6, 2, 3, 1, 1);

        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 20, 461, 151));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(InputWidget);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(InputWidget);
    } // setupUi

    void retranslateUi(QWidget *InputWidget)
    {
        InputWidget->setWindowTitle(QApplication::translate("InputWidget", "InputWidget", Q_NULLPTR));
        label->setText(QApplication::translate("InputWidget", "\346\230\276\347\244\272", Q_NULLPTR));
        checkBox->setText(QApplication::translate("InputWidget", "\346\270\205\347\251\272\346\214\211\351\222\256", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("InputWidget", "\345\217\252\350\257\273", Q_NULLPTR));
        label_2->setText(QApplication::translate("InputWidget", "\346\260\264\345\271\263\346\226\271\345\220\221", Q_NULLPTR));
        label_3->setText(QApplication::translate("InputWidget", "\345\236\202\347\233\264\346\226\271\345\220\221", Q_NULLPTR));
        label_4->setText(QApplication::translate("InputWidget", "\350\276\223\345\205\245\346\250\241\345\274\217", Q_NULLPTR));
        label_5->setText(QApplication::translate("InputWidget", "\351\252\214\350\257\201\345\231\250", Q_NULLPTR));
        label_6->setText(QApplication::translate("InputWidget", "\350\256\276\347\275\256\346\216\251\347\240\201", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("InputWidget", "QLineEdit", Q_NULLPTR));
        label_11->setText(QApplication::translate("InputWidget", "wordWrapMode", Q_NULLPTR));
        label_9->setText(QApplication::translate("InputWidget", "cursorWidth", Q_NULLPTR));
        label_10->setText(QApplication::translate("InputWidget", "lineWrap", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("InputWidget", "ovewritemode", Q_NULLPTR));
        label_8->setText(QApplication::translate("InputWidget", "tapStopWidth", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("InputWidget", "CheckBox", Q_NULLPTR));
        label_12->setText(QApplication::translate("InputWidget", "lineWrapMode", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("InputWidget", "QTextEdit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InputWidget: public Ui_InputWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTWIDGET_H
