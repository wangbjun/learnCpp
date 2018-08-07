#ifndef SIGNALMAPPERWIDGET_H
#define SIGNALMAPPERWIDGET_H

#include <QWidget>

namespace Ui {
class SignalMapperWidget;
}

class SignalMapperWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SignalMapperWidget(QWidget *parent = 0);
    ~SignalMapperWidget();

private:
    Ui::SignalMapperWidget *ui;
};

#endif // SIGNALMAPPERWIDGET_H
