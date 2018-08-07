#ifndef SIGNALSANDSLOTSWIDGET_H
#define SIGNALSANDSLOTSWIDGET_H

#include <QMainWindow>

namespace Ui {
class SignalsAndSlotsWidget;
}

class SignalsAndSlotsWidget : public QMainWindow
{
    Q_OBJECT

public:
    explicit SignalsAndSlotsWidget(QWidget *parent = 0);
    ~SignalsAndSlotsWidget();

signals:
    void sigShowVal(const QString&);

public slots:
    void sltLineEditChanged(const QString& text);

private slots:
    void on_pushButton_toggled(bool checked);

private:
    Ui::SignalsAndSlotsWidget *ui;
};

#endif // SIGNALSANDSLOTSWIDGET_H
