#ifndef SELECTCOLORWIDGET_H
#define SELECTCOLORWIDGET_H

#include <QWidget>

namespace Ui {
class SelectColorWidget;
}

class QButtonGroup;

class SelectColorWidget : public QWidget
{
    Q_OBJECT
signals:
    void clrButtonClicked(const QColor& clr);
public:
    explicit SelectColorWidget(QWidget *parent = 0);
    ~SelectColorWidget();

private:
    Ui::SelectColorWidget *ui;
    QButtonGroup* m_btnGroup;
};

#endif // SELECTCOLORWIDGET_H
