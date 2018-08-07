/********************************************************************************
** Form generated from reading UI file 'signalmapperwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNALMAPPERWIDGET_H
#define UI_SIGNALMAPPERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignalMapperWidget
{
public:

    void setupUi(QWidget *SignalMapperWidget)
    {
        if (SignalMapperWidget->objectName().isEmpty())
            SignalMapperWidget->setObjectName(QStringLiteral("SignalMapperWidget"));
        SignalMapperWidget->resize(400, 300);

        retranslateUi(SignalMapperWidget);

        QMetaObject::connectSlotsByName(SignalMapperWidget);
    } // setupUi

    void retranslateUi(QWidget *SignalMapperWidget)
    {
        SignalMapperWidget->setWindowTitle(QApplication::translate("SignalMapperWidget", "SignalMapperWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignalMapperWidget: public Ui_SignalMapperWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNALMAPPERWIDGET_H
