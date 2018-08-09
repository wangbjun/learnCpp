/********************************************************************************
** Form generated from reading UI file 'selectcolorwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTCOLORWIDGET_H
#define UI_SELECTCOLORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectColorWidget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;

    void setupUi(QWidget *SelectColorWidget)
    {
        if (SelectColorWidget->objectName().isEmpty())
            SelectColorWidget->setObjectName(QStringLiteral("SelectColorWidget"));
        SelectColorWidget->resize(400, 300);
        gridLayout_2 = new QGridLayout(SelectColorWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(SelectColorWidget);

        QMetaObject::connectSlotsByName(SelectColorWidget);
    } // setupUi

    void retranslateUi(QWidget *SelectColorWidget)
    {
        SelectColorWidget->setWindowTitle(QApplication::translate("SelectColorWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SelectColorWidget: public Ui_SelectColorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTCOLORWIDGET_H
