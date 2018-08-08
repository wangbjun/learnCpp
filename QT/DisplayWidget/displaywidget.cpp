#include "displaywidget.h"
#include "ui_displaywidget.h"

DisplayWidget::DisplayWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DisplayWidget)
{
    ui->setupUi(this);
    QStringList textList;
    textList << "PlainText" << "RichText" << "AutoText";
    ui->combo_format->addItems(textList);
}

DisplayWidget::~DisplayWidget()
{
    delete ui;
}

void DisplayWidget::on_lineEdit_editingFinished()
{
    ui->label->setText(ui->lineEdit->text());
}

void DisplayWidget::on_check_links_toggled(bool checked)
{
    ui->label->setOpenExternalLinks(checked);
}
void DisplayWidget::on_check_scaled_toggled(bool checked)
{
    ui->label->setScaledContents(checked);
}

void DisplayWidget::on_check_wordWrap_toggled(bool checked)
{
    ui->label->setWordWrap(checked);
}

void DisplayWidget::on_spin_indent_valueChanged(int arg1)
{
    ui->label->setIndent(arg1);
}

void DisplayWidget::on_combo_format_currentIndexChanged(int index)
{
    ui->label->setTextFormat((Qt::TextFormat)index);
}
