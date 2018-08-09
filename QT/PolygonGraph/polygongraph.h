#ifndef POLYGONGRAPH_H
#define POLYGONGRAPH_H

#include <QWidget>

class PolygonGraph : public QWidget
{
    Q_OBJECT

public:
    PolygonGraph(QWidget *parent = 0);
    ~PolygonGraph();
protected:
    void paintEvent(QPaintEvent* e);
};

#endif // POLYGONGRAPH_H
