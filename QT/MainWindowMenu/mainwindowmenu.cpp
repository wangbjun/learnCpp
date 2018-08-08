#include "mainwindowmenu.h"
#include "ui_mainwindowmenu.h"
#include "selectcolorwidget.h"
#include "QWidgetAction"

MainWindowMenu::MainWindowMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowMenu)
{
    ui->setupUi(this);
    mMenu = new QMenu("DianJi CaiDan");

    QStringList strs;
    strs << "weixin" << "qq";
    foreach(const QString& str, strs) {
        QAction* act = new QAction(str);
        act->setIcon(QIcon(QString(":/image/%1.png").arg(str)));
        act->setToolTip(str);
        mMenu->addAction(act);
    }
    mMenu->addSeparator();
    strs.clear();
    strs << "小" << "中" << "大";
    QActionGroup* group = new QActionGroup(this);
    for(int i= 0;i<strs.size();i++)
    {
        QString str = strs.at(i);
        QAction* act = group->addAction(str);
        act->setData(i);
        act->setCheckable(true);
        act->setToolTip(str);
        //将动作加入到动作组中，方便集中管理，
        //并且默认设置同一时间只有一个动作被选中
        group->addAction(act);
        mMenu->addAction(act);
    }
    //这里为简洁，使用了lambda表达式
    connect(group, &QActionGroup::triggered, [=](QAction* action){
        QFont fnt = ui->textEdit->font();//获取文本原字体
        int index = action->data().toInt();//使用data获取索引
        if (index == 0)//小
        {
            fnt.setPointSize(9);
        }
        else if (index == 1)//中
        {
            fnt.setPointSize(14);
        }
        else//大
        {
            fnt.setPointSize(19);
        }
        ui->textEdit->setFont(fnt);
    });

    //将菜单加入到菜单栏
    menuBar()->addMenu(mMenu);

    //设置文本
    ui->textEdit->setText("跟小豆君学Qt");

    //选择第一个字体设置动作，设置为小号字体
    group->actions().first()->setChecked(true);
    createTextColorMenu();
}

void MainWindowMenu::on_checkBox_sep_toggled(bool checked)
{
    mMenu->setSeparatorsCollapsible(checked);
}

void MainWindowMenu::on_checkBox_tear_toggled(bool checked)
{
    mMenu->setTearOffEnabled(checked);
}

void MainWindowMenu::on_checkBox_tips_toggled(bool checked)
{
    mMenu->setToolTipsVisible(checked);
}

void MainWindowMenu::setTextColor(const QColor &clr)
{
    QPalette palette = ui->textEdit->palette();
    palette.setColor(QPalette::Text, clr);
    ui->textEdit->setPalette(palette);

    m_menuColor->close();
}

void MainWindowMenu::createTextColorMenu()
{
    SelectColorWidget* wgt = new SelectColorWidget;
    m_menuColor = new QMenu("文字颜色");

    //这个QWidgetAction可以将我们自定义的窗口加入到菜单栏中
    QWidgetAction* act = new QWidgetAction(m_menuColor);
    act->setDefaultWidget(wgt);
    connect(wgt, SIGNAL(clrButtonClicked(QColor)),
            this, SLOT(setTextColor(QColor)));

    m_menuColor->addAction(act);
    menuBar()->addMenu(m_menuColor);
}

MainWindowMenu::~MainWindowMenu()
{
    delete ui;
}
