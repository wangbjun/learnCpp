#include "signalsandslotswidget.h"
#include "ui_signalsandslotswidget.h"
#include "qvalidator.h"

SignalsAndSlotsWidget::SignalsAndSlotsWidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SignalsAndSlotsWidget)
{
    ui->setupUi(this);
    int max = 100;
    int min = 0;
    ui->horizontalScrollBar->setMaximum(max);
    ui->horizontalScrollBar->setMinimum(min);

    ui->lineEdit->setValidator(new QIntValidator(45, 100, this));
    connect(ui->lineEdit, &QLineEdit::textChanged, this, &SignalsAndSlotsWidget::sltLineEditChanged);
    connect(this, SIGNAL(sigShowVal(QString)), ui->label, SLOT(setText(QString)));
}

SignalsAndSlotsWidget::~SignalsAndSlotsWidget()
{
    delete ui;
}

void SignalsAndSlotsWidget::sltLineEditChanged(const QString &text)
{
    int val = text.toInt();
    ui->horizontalScrollBar->setValue(val);
    emit sigShowVal(text);
}

void SignalsAndSlotsWidget::on_pushButton_toggled(bool checked)
{
    if(checked) {
        ui->pushButton->setText("隐藏进度条");
    }else {
        ui->pushButton->setText("显示进度条");
    }
}
