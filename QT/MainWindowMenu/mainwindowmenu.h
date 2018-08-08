#ifndef MAINWINDOWMENU_H
#define MAINWINDOWMENU_H

#include <QMainWindow>
#include <QMenu>

namespace Ui {
class MainWindowMenu;
}

class MainWindowMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowMenu(QWidget *parent = 0);
    ~MainWindowMenu();
private slots:
    void on_checkBox_sep_toggled(bool checked);
    void on_checkBox_tear_toggled(bool checked);
    void on_checkBox_tips_toggled(bool checked);
    void setTextColor(const QColor& clr);//用于设置textedit中的文本颜色

private:
    Ui::MainWindowMenu *ui;
    QMenu* mMenu;
    void createTextColorMenu();//用于创建自定义颜色窗口
    QMenu* m_menuColor;//颜色菜单栏
};

#endif // MAINWINDOWMENU_H
