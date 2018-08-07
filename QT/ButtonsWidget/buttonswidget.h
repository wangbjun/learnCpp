#ifndef BUTTONSWIDGET_H
#define BUTTONSWIDGET_H

#include <QWidget>

namespace Ui {
class ButtonsWidget;
}

class ButtonsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ButtonsWidget(QWidget *parent = 0);
    ~ButtonsWidget();

private slots:
    void on_pushButton_clicked();
    void on_check_flat_stateChanged(int arg1);

private:
    Ui::ButtonsWidget *ui;
};

#endif // BUTTONSWIDGET_H
