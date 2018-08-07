/********************************************************************************
** Form generated from reading UI file 'customdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMDIALOG_H
#define UI_CUSTOMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CustomDialog
{
public:
    QPushButton *OK;
    QPushButton *Cancle;

    void setupUi(QDialog *CustomDialog)
    {
        if (CustomDialog->objectName().isEmpty())
            CustomDialog->setObjectName(QStringLiteral("CustomDialog"));
        CustomDialog->resize(400, 300);
        OK = new QPushButton(CustomDialog);
        OK->setObjectName(QStringLiteral("OK"));
        OK->setGeometry(QRect(50, 130, 89, 25));
        Cancle = new QPushButton(CustomDialog);
        Cancle->setObjectName(QStringLiteral("Cancle"));
        Cancle->setGeometry(QRect(250, 130, 89, 25));

        retranslateUi(CustomDialog);
        QObject::connect(OK, SIGNAL(clicked()), CustomDialog, SLOT(accept()));
        QObject::connect(Cancle, SIGNAL(clicked()), CustomDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CustomDialog);
    } // setupUi

    void retranslateUi(QDialog *CustomDialog)
    {
        CustomDialog->setWindowTitle(QString());
        OK->setText(QApplication::translate("CustomDialog", "PushButton", Q_NULLPTR));
        Cancle->setText(QApplication::translate("CustomDialog", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CustomDialog: public Ui_CustomDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMDIALOG_H
