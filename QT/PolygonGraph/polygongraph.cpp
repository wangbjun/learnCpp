#include "polygongraph.h"
#include <QPainter>
#include "QtMath"

PolygonGraph::PolygonGraph(QWidget *parent)
    : QWidget(parent)
{
}

PolygonGraph::~PolygonGraph()
{

}

void PolygonGraph::paintEvent(QPaintEvent *e)
{
    int count = 6;
    int radius = 100;

    QPainter painter(this);

    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::lightGray);

    painter.translate(width()/2., height()/2.);

    for (int i = 0; i < count; ++i)
    {
        //设中心点到边的垂线与半径的夹角为degree=(360/count)/2即：
        float degree = 180./count;

        //先将坐标进行旋转，然后再绘制
        painter.rotate(2 * degree);

        //设边长的一半为wid,则wid = radius*sin(degree)
        //原点到边的距离为hei，则hei = radius*cos(degree)
        //在程序中三角函数都是以弧度为基准，所以要先将角度转化成弧度。
        //头文件要包含QtMath
        float radian = qDegreesToRadians(degree);
        float wid    = radius * qSin(radian);
        float hei    = radius * qCos(radian);

        //绘制该三角区块
        QPainterPath path;
        path.lineTo(-wid, -hei);
        path.lineTo(wid, -hei);
        path.lineTo(0, 0);
        painter.drawPath(path);

        //随机生成一个颜色，作为该区块的颜色，并上色
        QColor color(qrand()%255, qrand()%255, qrand()%255, 150);
        painter.fillPath(path, color);
    }
}
