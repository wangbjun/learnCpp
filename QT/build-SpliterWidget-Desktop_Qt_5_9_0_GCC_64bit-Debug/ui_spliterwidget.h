/********************************************************************************
** Form generated from reading UI file 'spliterwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLITERWIDGET_H
#define UI_SPLITERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpliterWidget
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QSplitter *splitter;
    QCheckBox *check_opaqueResize;
    QCheckBox *check_collapsible;

    void setupUi(QWidget *SpliterWidget)
    {
        if (SpliterWidget->objectName().isEmpty())
            SpliterWidget->setObjectName(QStringLiteral("SpliterWidget"));
        SpliterWidget->resize(400, 300);
        pushButton = new QPushButton(SpliterWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 67, 89, 221));
        textEdit = new QTextEdit(SpliterWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 76, 251, 211));
        splitter = new QSplitter(SpliterWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(20, 10, 258, 23));
        splitter->setOrientation(Qt::Horizontal);
        check_opaqueResize = new QCheckBox(splitter);
        check_opaqueResize->setObjectName(QStringLiteral("check_opaqueResize"));
        check_opaqueResize->setChecked(true);
        splitter->addWidget(check_opaqueResize);
        check_collapsible = new QCheckBox(splitter);
        check_collapsible->setObjectName(QStringLiteral("check_collapsible"));
        check_collapsible->setChecked(true);
        splitter->addWidget(check_collapsible);

        retranslateUi(SpliterWidget);

        QMetaObject::connectSlotsByName(SpliterWidget);
    } // setupUi

    void retranslateUi(QWidget *SpliterWidget)
    {
        SpliterWidget->setWindowTitle(QApplication::translate("SpliterWidget", "SpliterWidget", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SpliterWidget", "PushButton", Q_NULLPTR));
        check_opaqueResize->setText(QApplication::translate("SpliterWidget", "opaqueResize", Q_NULLPTR));
        check_collapsible->setText(QApplication::translate("SpliterWidget", "childrenCollapse", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SpliterWidget: public Ui_SpliterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLITERWIDGET_H
