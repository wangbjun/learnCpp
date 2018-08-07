#include "inputwidget.h"
#include "ui_inputwidget.h"

InputWidget::InputWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InputWidget)
{
    ui->setupUi(this);
    initLineEditTab();
    initTextEditTab();
}

InputWidget::~InputWidget()
{
    delete ui;
}

void InputWidget::on_checkBox_toggled(bool checked){
    ui->lineEdit->setClearButtonEnabled(checked);
}


void InputWidget::on_checkBox_2_toggled(bool checked){
    ui->lineEdit->setReadOnly(checked);
}

void InputWidget::on_comboBox_currentIndexChanged(int index)
{
    ui->lineEdit->setAlignment((Qt::Alignment)(Qt::AlignLeft<<index));
}

void InputWidget::on_comboBox_2_currentIndexChanged(int index)
{
    ui->lineEdit->setAlignment((Qt::Alignment)(Qt::AlignTop<<index));
}
void InputWidget::on_comboBox_3_currentIndexChanged(int index)
{
    ui->lineEdit->setEchoMode((QLineEdit::EchoMode)(index));
}
void InputWidget::on_comboBox_4_currentIndexChanged(int index)
{
    //删除当前验证器
    ui->lineEdit->setValidator(0);
    if (index == 1)
    {
        //整数验证器，0-80
        QIntValidator* validator = new QIntValidator(20, 80);
        ui->lineEdit->setValidator(validator);
    }
    else if (index == 2)
    {
        //双精度验证器，0.-1000.
        QDoubleValidator* validator = new QDoubleValidator();
        validator->setBottom(0.);
        validator->setTop(100.);
        ui->lineEdit->setValidator(validator);
    }
    else  if (index == 3)
    {
        //匹配0-99的整数
        QRegExpValidator* validator = new QRegExpValidator(QRegExp("^\\d\\d?$"));
        ui->lineEdit->setValidator(validator);
    }
}

void InputWidget::on_lineEdit_2_textChanged(const QString &arg1)
{
    ui->lineEdit->setInputMask(arg1);
}

void InputWidget::on_spinBox_valueChanged(int arg1)
{
    ui->textEdit->setCursorWidth(arg1);
}

void InputWidget::on_spinBox_2_valueChanged(int arg1)
{
    ui->textEdit->setLineWrapColumnOrWidth(arg1);
}

void InputWidget::on_spinBox_3_valueChanged(int arg1)
{
    ui->textEdit->setTabStopWidth(arg1);
}

void InputWidget::on_checkBox_3_toggled(bool checked)
{
    ui->textEdit->setOverwriteMode(checked);
}

void InputWidget::on_checkBox_4_toggled(bool checked)
{
    ui->textEdit->setTabChangesFocus(checked);
}

void InputWidget::on_comboBox_5_currentIndexChanged(int index)
{
    ui->textEdit->setLineWrapMode((QTextEdit::LineWrapMode)index);
}

void InputWidget::on_comboBox_6_currentIndexChanged(int index)
{
    ui->textEdit->setWordWrapMode((QTextOption::WrapMode)index);
}

void InputWidget::initLineEditTab()
{
    QStringList textList;
    textList << "AlignLeft" <<"AlignRight" << "AlignHCenter" << "AlignJustify";
    ui->comboBox->addItems(textList);

    //输入方向-垂直
     textList.clear();
     textList << "AlignTop" <<"AlignBottom" << "AlignVCenter" << "AlignBaseline";
     ui->comboBox_2->addItems(textList);

     //输入模式
     textList.clear();
     textList << "Normal" <<"NoEcho" << "Password" << "PasswordEchoOnEdit";
     ui->comboBox_3->addItems(textList);

     //验证器
     textList.clear();
     textList << "无验证器" << "Int" <<"Double" << "Reqexp";
     ui->comboBox_4->addItems(textList);
}

void InputWidget::initTextEditTab()
{
    //输入方向-水平
    QStringList textList;
    textList << "NoWrap" <<"WidgetWidth" << "FixedPixelWidth" << "FixedColumnWidth";
    ui->comboBox_5->addItems(textList);

    //输入方向-垂直
    textList.clear();
    textList << "NoWrap" << "WordWrap" <<"ManualWrap" << "WrapAnywhere" << "WrapAtWordBoundaryOrAnywhere";
    ui->comboBox_6->addItems(textList);
}
