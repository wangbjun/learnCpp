#include "buttonswidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ButtonsWidget w;
    w.show();

    return a.exec();
}
