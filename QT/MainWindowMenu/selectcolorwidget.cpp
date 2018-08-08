#include "selectcolorwidget.h"
#include "ui_selectcolorwidget.h"

SelectColorWidget::SelectColorWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectColorWidget)
{
    ui->setupUi(this);
}

SelectColorWidget::~SelectColorWidget()
{
    delete ui;
}
