#include "standarddialogs.h"
#include "ui_standarddialogs.h"
#include "QInputDialog"
#include "QPushButton"
#include "QColorDialog"
#include "QFontDialog"
#include "QFileDialog"
#include "QMessageBox"
#include "QDebug"
#include "QProgressBar"
#include "QProgressDialog"
#include "QWizard"

StandardDialogs::StandardDialogs(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StandardDialogs)
{
    ui->setupUi(this);
    connect(ui->btn_getint,  &QPushButton::clicked, this, &StandardDialogs::on_btn_getint_clicked);
    connect(ui->btn_getdouble,  &QPushButton::clicked, this, &StandardDialogs::on_btn_getdouble_clicked);
    connect(ui->btn_getitem, &QPushButton::clicked, this, &StandardDialogs::on_btn_getitem_clicked);
    connect(ui->btn_gettext, &QPushButton::clicked, this, &StandardDialogs::on_btn_gettext_clicked);
    connect(ui->btn_getmtext, &QPushButton::clicked, this, &StandardDialogs::on_btn_getmtext_clicked);
    connect(ui->btn_getcolor, &QPushButton::clicked, this, &StandardDialogs::on_btn_getcolor_clicked);
    connect(ui->btn_getfont, &QPushButton::clicked, this, &StandardDialogs::on_btn_font_clicked);

    connect(ui->btn_dir, &QPushButton::clicked, this, &StandardDialogs::on_btn_dir_clicked);
    connect(ui->btn_file, &QPushButton::clicked, this, &StandardDialogs::on_btn_file_clicked);
    connect(ui->btn_files, &QPushButton::clicked, this, &StandardDialogs::on_btn_files_clicked);
    connect(ui->btn_savefile, &QPushButton::clicked, this, &StandardDialogs::on_btn_savefile_clicked);

    connect(ui->btn_critical, &QPushButton::clicked, this, &StandardDialogs::on_btn_critical_clicked);
    connect(ui->btn_info, &QPushButton::clicked, this, &StandardDialogs::on_btn_info_clicked);
    connect(ui->btn_msg, &QPushButton::clicked, this, &StandardDialogs::on_btn_msg_clicked);
    connect(ui->btn_warning, &QPushButton::clicked, this, &StandardDialogs::on_btn_warning_clicked);
    connect(ui->btn_question, &QPushButton::clicked, this, &StandardDialogs::on_btn_question_clicked);

    connect(ui->btn_progress, &QPushButton::clicked, this, &StandardDialogs::on_btn_progress_clicked);
    connect(ui->btn_wizard, &QPushButton::clicked, this, &StandardDialogs::on_btn_wizard_clicked);
}

StandardDialogs::~StandardDialogs()
{
    delete ui;
}

void StandardDialogs::on_btn_getint_clicked()
{
    bool ok;
    int i = QInputDialog::getInt(this, tr("情况"), tr("几岁毕业"),25, 16,100,5,&ok );
    if(ok) {
        ui->label_input->setText(tr("%1").arg(i));
    }
}

void StandardDialogs::on_btn_getdouble_clicked()
{
    bool ok;
    double d = QInputDialog::getDouble(this, tr("工作"), tr("一天挣多少钱？"),1000, 100, 10000, 1, &ok);
    if (ok) {
        ui->label_input->setText((QString("%1")).arg(d));
    }
}

void StandardDialogs::on_btn_getitem_clicked()
{
    QStringList items;
    items << tr("王者荣耀") << tr("Dota") << tr("Dota2") << tr("LOL");

    bool ok;
    QString item = QInputDialog::getItem(this, tr("游戏"), tr("您玩哪个游戏？"), items, 0 , false, &ok);
    if (ok && !item.isEmpty()) {
        ui->label_input->setText(item);
    }
}

void StandardDialogs::on_btn_gettext_clicked()
{
    bool ok;
    QString text = QInputDialog::getText(this, tr("发展"), tr("想跳槽了吗？"), QLineEdit::Normal, tr("懒"), &ok);
    if (ok && !text.isEmpty()) {
        ui->label_input->setText(text);
    }
}

void StandardDialogs::on_btn_getmtext_clicked()
{
    bool ok;
    QString text = QInputDialog::getMultiLineText(this, tr("计划"),
                                                  tr("下一步怎么做"), "走着瞧", &ok);
    if (ok && !text.isEmpty())
        ui->label_input->setText(text);
}

void StandardDialogs::on_btn_getcolor_clicked()
{
    QColorDialog::ColorDialogOptions  options;
    if (ui->check_alpha->isChecked()){
        options = QColorDialog::ShowAlphaChannel;
    }
    const QColor color = QColorDialog::getColor(Qt::green, this, "选择颜色", options);
    if (color.isValid()) {
        ui->btn_getcolor->setText(color.name());
        ui->btn_getcolor->setPalette(QPalette(color));
        ui->btn_getcolor->setAutoFillBackground(true);
    }
}

void StandardDialogs::on_btn_font_clicked()
{
   bool ok;
   QFont font = QFontDialog::getFont(&ok, ui->label_font->font(), this, tr("选择字体"));
   if (ok)
   {
       ui->label_font->setFont(font);
   }
}

void StandardDialogs::on_btn_dir_clicked()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("获取文件夹"), "./");
    if (!dir.isEmpty()) {
        ui->line_path->setText(dir);
    }
}

void StandardDialogs::on_btn_file_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                tr("打开一个文件"),
                                "./",
                                tr("All Files (*);;Text Files (*.txt)"));
    if (!fileName.isEmpty())
        ui->line_path->setText(fileName);
}

void StandardDialogs::on_btn_files_clicked()
{
    QStringList files = QFileDialog::getOpenFileNames(
                                this, tr("打开多个文件"),
                                "./",
                                tr("All Files (*);;Text Files (*.txt)"));
    if (files.count())
        ui->line_path->setText(QString("[%1]").arg(files.join(", ")));
}
void StandardDialogs::on_btn_savefile_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                                tr("保存文件"),
                                "./",
                                tr("All Files (*);;Text Files (*.txt)"));
    if (!fileName.isEmpty())
        ui->line_path->setText(fileName);
}

void StandardDialogs::on_btn_critical_clicked()
{
    QMessageBox::critical(this, tr("危险"), tr("修路危险"), tr("返回"), tr("步行"));
}

void StandardDialogs::on_btn_info_clicked()
{
    QMessageBox::information(this, tr("通知"), tr("会有个女朋友吗"), tr("不可能"), tr("真不可能"));
}

void StandardDialogs::on_btn_question_clicked()
{
     QMessageBox::question(this, tr("问题"),
                                    "喜欢身材好的还是颜值高的",
                                    QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
}

void StandardDialogs::on_btn_warning_clicked()
{
    QMessageBox msgBox(QMessageBox::Warning, tr("警告"),
                       "不要调戏女朋友", 0, this);
    msgBox.setDetailedText(tr("真的别"));
    msgBox.addButton(tr("Save &Again"), QMessageBox::AcceptRole);
    msgBox.addButton(tr("&Continue"), QMessageBox::RejectRole);
    if (msgBox.exec() == QMessageBox::AcceptRole)
        qDebug() << "accept";
}

void StandardDialogs::on_btn_msg_clicked()
{
    QMessageBox::about(this, "哈哈", "恭喜你中了5个亿，不好意思，系统出错");
}

void StandardDialogs::on_btn_progress_clicked()
{
    int numFiles = 500000;
    QProgressDialog progress("复制文件中...", "中断", 0, numFiles, this);
    progress.setWindowModality(Qt::WindowModal);
    progress.show();

    for (int i = 0; i < numFiles; i++)
    {
        progress.setValue(i);
        QCoreApplication::processEvents();
        if (progress.wasCanceled())
            break;
    }
    progress.setValue(numFiles);
}

void StandardDialogs::on_btn_wizard_clicked()
{
    QWizard w(this);
    w.setWindowTitle("向导");

    QWizardPage* page1 = new QWizardPage();
    QWizardPage* page2 = new QWizardPage();
    QWizardPage* page3 = new QWizardPage();
    page1->setTitle("第1步");
    page2->setTitle("第2步");
    page3->setTitle("第3步");

    w.addPage(page1);
    w.addPage(page2);
    w.addPage(page3);
    w.exec();
}
