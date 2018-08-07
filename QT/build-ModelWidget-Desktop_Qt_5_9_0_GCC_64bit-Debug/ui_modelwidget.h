/********************************************************************************
** Form generated from reading UI file 'modelwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELWIDGET_H
#define UI_MODELWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModelWidget
{
public:
    QLineEdit *lineEdit;
    QPushButton *btnWindow;
    QPushButton *btnApp;
    QPushButton *btnCustom;

    void setupUi(QWidget *ModelWidget)
    {
        if (ModelWidget->objectName().isEmpty())
            ModelWidget->setObjectName(QStringLiteral("ModelWidget"));
        ModelWidget->resize(400, 300);
        lineEdit = new QLineEdit(ModelWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 170, 311, 25));
        btnWindow = new QPushButton(ModelWidget);
        btnWindow->setObjectName(QStringLiteral("btnWindow"));
        btnWindow->setGeometry(QRect(110, 40, 89, 25));
        btnApp = new QPushButton(ModelWidget);
        btnApp->setObjectName(QStringLiteral("btnApp"));
        btnApp->setGeometry(QRect(110, 110, 89, 25));
        btnCustom = new QPushButton(ModelWidget);
        btnCustom->setObjectName(QStringLiteral("btnCustom"));
        btnCustom->setGeometry(QRect(110, 220, 89, 25));

        retranslateUi(ModelWidget);

        QMetaObject::connectSlotsByName(ModelWidget);
    } // setupUi

    void retranslateUi(QWidget *ModelWidget)
    {
        ModelWidget->setWindowTitle(QApplication::translate("ModelWidget", "ModelWidget", Q_NULLPTR));
        btnWindow->setText(QApplication::translate("ModelWidget", "a", Q_NULLPTR));
        btnApp->setText(QApplication::translate("ModelWidget", "b", Q_NULLPTR));
        btnCustom->setText(QApplication::translate("ModelWidget", "d", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ModelWidget: public Ui_ModelWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELWIDGET_H
