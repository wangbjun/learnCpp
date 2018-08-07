#include "parentchildwidget.h"
#include "ui_parentchildwidget.h"
#include <QPushButton>

ParentChildWidget::ParentChildWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ParentChildWidget)
{
    ui->setupUi(this);
    for (int i = 1; i <= 3; ++i)
    {
       QPushButton* buttonChild = new QPushButton(this);
       buttonChild->setText(QString("我是控件%1").arg(i));
       buttonChild->resize(100*i, 100);
       connect(buttonChild, SIGNAL(clicked()), buttonChild, SLOT(close()));
    }
}

ParentChildWidget::~ParentChildWidget()
{
    delete ui;
}
