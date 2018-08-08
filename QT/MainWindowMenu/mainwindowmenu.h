#ifndef MAINWINDOWMENU_H
#define MAINWINDOWMENU_H

#include <QMainWindow>

namespace Ui {
class MainWindowMenu;
}

class MainWindowMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowMenu(QWidget *parent = 0);
    ~MainWindowMenu();

private:
    Ui::MainWindowMenu *ui;
};

#endif // MAINWINDOWMENU_H
