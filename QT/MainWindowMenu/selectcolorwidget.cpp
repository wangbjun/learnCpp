#include "selectcolorwidget.h"
#include "ui_selectcolorwidget.h"
#include "QPushButton"
#include "QButtonGroup"

SelectColorWidget::SelectColorWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectColorWidget)
{
    ui->setupUi(this);
    m_btnGroup = new QButtonGroup(this);

    //创建一个4*4的颜色选择表，这里用了Qt中预定义的颜色
    for (int i = 0; i < Qt::transparent-3; ++i)
    {
        int col  = i % 4;
        int row = i/4;
        QPushButton * btn = new QPushButton;
        QColor clr = (Qt::GlobalColor)(i+2);
        btn->setStyleSheet(QString("background-color:%1").arg(clr.name()));
        ui->gridLayout->addWidget(btn, row, col);
        m_btnGroup->addButton(btn, i+2);
    }

    connect(m_btnGroup, static_cast<void(QButtonGroup::*)(int)>(&QButtonGroup::buttonClicked),
            [=](int index)
    {
        QColor clr = (Qt::GlobalColor)index;
        emit clrButtonClicked(clr);
    });

}

SelectColorWidget::~SelectColorWidget()
{
    delete ui;
}
