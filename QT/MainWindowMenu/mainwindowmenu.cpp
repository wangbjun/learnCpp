#include "mainwindowmenu.h"
#include "ui_mainwindowmenu.h"

MainWindowMenu::MainWindowMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowMenu)
{
    ui->setupUi(this);
}

MainWindowMenu::~MainWindowMenu()
{
    delete ui;
}
