/********************************************************************************
** Form generated from reading UI file 'standarddialogs.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STANDARDDIALOGS_H
#define UI_STANDARDDIALOGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StandardDialogs
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *btn_getint;
    QPushButton *btn_getdouble;
    QPushButton *btn_getitem;
    QPushButton *btn_gettext;
    QPushButton *btn_getmtext;
    QLabel *label_input;
    QWidget *tab_2;
    QPushButton *btn_getcolor;
    QCheckBox *check_alpha;
    QWidget *widget;
    QPushButton *btn_getfont;
    QLabel *label_font;
    QWidget *tab_4;
    QLineEdit *line_path;
    QPushButton *btn_dir;
    QPushButton *btn_file;
    QPushButton *btn_files;
    QPushButton *btn_savefile;
    QWidget *tab_5;
    QPushButton *btn_critical;
    QPushButton *btn_info;
    QPushButton *btn_warning;
    QPushButton *btn_question;
    QPushButton *btn_msg;
    QWidget *tab_6;
    QPushButton *btn_progress;
    QWidget *tab_7;
    QPushButton *btn_wizard;

    void setupUi(QWidget *StandardDialogs)
    {
        if (StandardDialogs->objectName().isEmpty())
            StandardDialogs->setObjectName(QStringLiteral("StandardDialogs"));
        StandardDialogs->resize(836, 546);
        tabWidget = new QTabWidget(StandardDialogs);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(70, 100, 681, 401));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        btn_getint = new QPushButton(tab);
        btn_getint->setObjectName(QStringLiteral("btn_getint"));
        btn_getint->setGeometry(QRect(30, 40, 211, 25));
        btn_getdouble = new QPushButton(tab);
        btn_getdouble->setObjectName(QStringLiteral("btn_getdouble"));
        btn_getdouble->setGeometry(QRect(30, 100, 211, 25));
        btn_getitem = new QPushButton(tab);
        btn_getitem->setObjectName(QStringLiteral("btn_getitem"));
        btn_getitem->setGeometry(QRect(30, 150, 211, 25));
        btn_gettext = new QPushButton(tab);
        btn_gettext->setObjectName(QStringLiteral("btn_gettext"));
        btn_gettext->setGeometry(QRect(30, 200, 211, 25));
        btn_getmtext = new QPushButton(tab);
        btn_getmtext->setObjectName(QStringLiteral("btn_getmtext"));
        btn_getmtext->setGeometry(QRect(30, 240, 211, 25));
        label_input = new QLabel(tab);
        label_input->setObjectName(QStringLiteral("label_input"));
        label_input->setGeometry(QRect(320, 40, 151, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        btn_getcolor = new QPushButton(tab_2);
        btn_getcolor->setObjectName(QStringLiteral("btn_getcolor"));
        btn_getcolor->setGeometry(QRect(70, 90, 89, 51));
        check_alpha = new QCheckBox(tab_2);
        check_alpha->setObjectName(QStringLiteral("check_alpha"));
        check_alpha->setGeometry(QRect(80, 200, 161, 23));
        tabWidget->addTab(tab_2, QString());
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        btn_getfont = new QPushButton(widget);
        btn_getfont->setObjectName(QStringLiteral("btn_getfont"));
        btn_getfont->setGeometry(QRect(70, 80, 111, 25));
        label_font = new QLabel(widget);
        label_font->setObjectName(QStringLiteral("label_font"));
        label_font->setGeometry(QRect(300, 160, 221, 101));
        tabWidget->addTab(widget, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        line_path = new QLineEdit(tab_4);
        line_path->setObjectName(QStringLiteral("line_path"));
        line_path->setGeometry(QRect(50, 80, 351, 201));
        btn_dir = new QPushButton(tab_4);
        btn_dir->setObjectName(QStringLiteral("btn_dir"));
        btn_dir->setGeometry(QRect(430, 70, 171, 25));
        btn_file = new QPushButton(tab_4);
        btn_file->setObjectName(QStringLiteral("btn_file"));
        btn_file->setGeometry(QRect(430, 140, 171, 25));
        btn_files = new QPushButton(tab_4);
        btn_files->setObjectName(QStringLiteral("btn_files"));
        btn_files->setGeometry(QRect(430, 210, 171, 25));
        btn_savefile = new QPushButton(tab_4);
        btn_savefile->setObjectName(QStringLiteral("btn_savefile"));
        btn_savefile->setGeometry(QRect(430, 280, 171, 25));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        btn_critical = new QPushButton(tab_5);
        btn_critical->setObjectName(QStringLiteral("btn_critical"));
        btn_critical->setGeometry(QRect(70, 60, 131, 25));
        btn_info = new QPushButton(tab_5);
        btn_info->setObjectName(QStringLiteral("btn_info"));
        btn_info->setGeometry(QRect(70, 150, 131, 25));
        btn_warning = new QPushButton(tab_5);
        btn_warning->setObjectName(QStringLiteral("btn_warning"));
        btn_warning->setGeometry(QRect(270, 60, 131, 25));
        btn_question = new QPushButton(tab_5);
        btn_question->setObjectName(QStringLiteral("btn_question"));
        btn_question->setGeometry(QRect(70, 230, 131, 25));
        btn_msg = new QPushButton(tab_5);
        btn_msg->setObjectName(QStringLiteral("btn_msg"));
        btn_msg->setGeometry(QRect(270, 140, 131, 25));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        btn_progress = new QPushButton(tab_6);
        btn_progress->setObjectName(QStringLiteral("btn_progress"));
        btn_progress->setGeometry(QRect(260, 150, 89, 25));
        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        btn_wizard = new QPushButton(tab_7);
        btn_wizard->setObjectName(QStringLiteral("btn_wizard"));
        btn_wizard->setGeometry(QRect(250, 140, 89, 25));
        tabWidget->addTab(tab_7, QString());

        retranslateUi(StandardDialogs);

        tabWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(StandardDialogs);
    } // setupUi

    void retranslateUi(QWidget *StandardDialogs)
    {
        StandardDialogs->setWindowTitle(QApplication::translate("StandardDialogs", "StandardDialogs", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        tabWidget->setWhatsThis(QApplication::translate("StandardDialogs", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        btn_getint->setText(QApplication::translate("StandardDialogs", "getInt()", Q_NULLPTR));
        btn_getdouble->setText(QApplication::translate("StandardDialogs", "getDouble()", Q_NULLPTR));
        btn_getitem->setText(QApplication::translate("StandardDialogs", "getItem", Q_NULLPTR));
        btn_gettext->setText(QApplication::translate("StandardDialogs", "getText()", Q_NULLPTR));
        btn_getmtext->setText(QApplication::translate("StandardDialogs", "getMultiText()", Q_NULLPTR));
        label_input->setText(QApplication::translate("StandardDialogs", "TextLabel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("StandardDialogs", "\350\276\223\345\205\245\345\257\271\350\257\235\346\241\206", Q_NULLPTR));
        btn_getcolor->setText(QApplication::translate("StandardDialogs", "getColor()", Q_NULLPTR));
        check_alpha->setText(QApplication::translate("StandardDialogs", "\346\230\257\345\220\246", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("StandardDialogs", "\351\242\234\350\211\262\345\257\271\350\257\235\346\241\206", Q_NULLPTR));
        btn_getfont->setText(QApplication::translate("StandardDialogs", "getFonts()", Q_NULLPTR));
        label_font->setText(QApplication::translate("StandardDialogs", "\346\202\250\345\245\275\357\274\214QT", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("StandardDialogs", "\345\255\227\344\275\223\345\257\271\350\257\235", Q_NULLPTR));
        btn_dir->setText(QApplication::translate("StandardDialogs", "getExistDir()", Q_NULLPTR));
        btn_file->setText(QApplication::translate("StandardDialogs", "getOpenFileName()", Q_NULLPTR));
        btn_files->setText(QApplication::translate("StandardDialogs", "getOpenFileNames()", Q_NULLPTR));
        btn_savefile->setText(QApplication::translate("StandardDialogs", "getSaveFileName()", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("StandardDialogs", "\346\226\207\344\273\266\345\257\271\350\257\235\346\241\206", Q_NULLPTR));
        btn_critical->setText(QApplication::translate("StandardDialogs", "critical", Q_NULLPTR));
        btn_info->setText(QApplication::translate("StandardDialogs", "information", Q_NULLPTR));
        btn_warning->setText(QApplication::translate("StandardDialogs", "warning", Q_NULLPTR));
        btn_question->setText(QApplication::translate("StandardDialogs", "question", Q_NULLPTR));
        btn_msg->setText(QApplication::translate("StandardDialogs", "showMsg", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("StandardDialogs", "\346\266\210\346\201\257\345\257\271", Q_NULLPTR));
        btn_progress->setText(QApplication::translate("StandardDialogs", "\350\277\233\345\272\246", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("StandardDialogs", "\350\277\233\345\272\246\345\257\271\350\257\235\346\241\206", Q_NULLPTR));
        btn_wizard->setText(QApplication::translate("StandardDialogs", "\345\274\271\345\207\272\345\220\221\345\257\274", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("StandardDialogs", "\345\220\221\345\257\274\345\257\271\350\257\235\346\241\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StandardDialogs: public Ui_StandardDialogs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STANDARDDIALOGS_H
