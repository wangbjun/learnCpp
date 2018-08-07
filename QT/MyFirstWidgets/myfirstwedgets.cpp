#include "myfirstwedgets.h"
#include "ui_myfirstwedgets.h"

struct MyFirstWedgets::Private
{
    int value1;
    int value2;
    int value3;

    Private(){
        value1 = -1;
        value2 = -1;
        value3 = -1;
    }
    ~Private(){}
};

MyFirstWedgets::MyFirstWedgets(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyFirstWedgets),
    d(new Private)
{
    ui->setupUi(this);
    ui->lineEdit->setText(QString::number(d->value1+d->value2+d->value3));
}

MyFirstWedgets::~MyFirstWedgets()
{
    delete ui;
    delete d;
}
