#ifndef STANDARDDIALOGS_H
#define STANDARDDIALOGS_H

#include <QWidget>

namespace Ui {
class StandardDialogs;
}

class StandardDialogs : public QWidget
{
    Q_OBJECT

public:
    explicit StandardDialogs(QWidget *parent = 0);
    ~StandardDialogs();
    void on_btn_getint_clicked();
    void on_btn_getdouble_clicked();
    void on_btn_getitem_clicked();
    void on_btn_gettext_clicked();
    void on_btn_getmtext_clicked();
    void on_btn_getcolor_clicked();
    void on_btn_font_clicked();
    void on_btn_dir_clicked();
    void on_btn_file_clicked();
    void on_btn_files_clicked();
    void on_btn_savefile_clicked();
    void on_btn_critical_clicked();
    void on_btn_info_clicked();
    void on_btn_question_clicked();
    void on_btn_warning_clicked();
    void on_btn_msg_clicked();
    void on_btn_progress_clicked();
    void on_btn_wizard_clicked();
private:
    Ui::StandardDialogs *ui;
};

#endif // STANDARDDIALOGS_H
