#include "polygongraph.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PolygonGraph w;
    w.show();

    return a.exec();
}
