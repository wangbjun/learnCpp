#include "parentchildwidget.h"
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ParentChildWidget w;
    w.show();
    return a.exec();
}
