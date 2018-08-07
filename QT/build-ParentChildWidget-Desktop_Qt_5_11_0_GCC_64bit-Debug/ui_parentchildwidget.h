/********************************************************************************
** Form generated from reading UI file 'parentchildwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARENTCHILDWIDGET_H
#define UI_PARENTCHILDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParentChildWidget
{
public:

    void setupUi(QWidget *ParentChildWidget)
    {
        if (ParentChildWidget->objectName().isEmpty())
            ParentChildWidget->setObjectName(QStringLiteral("ParentChildWidget"));
        ParentChildWidget->resize(400, 300);

        retranslateUi(ParentChildWidget);

        QMetaObject::connectSlotsByName(ParentChildWidget);
    } // setupUi

    void retranslateUi(QWidget *ParentChildWidget)
    {
        ParentChildWidget->setWindowTitle(QApplication::translate("ParentChildWidget", "ParentChildWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParentChildWidget: public Ui_ParentChildWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARENTCHILDWIDGET_H
