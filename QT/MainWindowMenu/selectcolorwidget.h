#ifndef SELECTCOLORWIDGET_H
#define SELECTCOLORWIDGET_H

#include <QWidget>

namespace Ui {
class SelectColorWidget;
}

class SelectColorWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SelectColorWidget(QWidget *parent = 0);
    ~SelectColorWidget();

private:
    Ui::SelectColorWidget *ui;
};

#endif // SELECTCOLORWIDGET_H
