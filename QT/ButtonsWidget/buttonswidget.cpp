#include "buttonswidget.h"
#include "ui_buttonswidget.h"

ButtonsWidget::ButtonsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ButtonsWidget)
{
    ui->setupUi(this);
    ui->pushButton->setAutoRepeat(true);
    ui->pushButton->setAutoRepeatDelay(500);
    ui->pushButton->setAutoRepeatInterval(500);
}

ButtonsWidget::~ButtonsWidget()
{
    delete ui;
}

void ButtonsWidget::on_pushButton_clicked()
{
    int val = ui->spinBox->value();
    ui->spinBox->setValue(val+1);
}

void ButtonsWidget::on_check_flat_stateChanged(int arg1)
{
    ui->pushButton->setFlat(arg1 == Qt::Checked);
}
