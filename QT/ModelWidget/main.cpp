#include "modelwidget.h"
#include <QApplication>
#include "QDialog"
#include "QDebug"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ModelWidget w;
    w.show();

    QDialog modeLessDlg;
    modeLessDlg.setWindowTitle("None Mode Dialog");
    modeLessDlg.show();
    modeLessDlg.resize(200, 100);
    qDebug() << "显示完非模态对话框后，不需要等用户操作就会立马执行我";

    return a.exec();
}
