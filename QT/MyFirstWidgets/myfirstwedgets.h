#ifndef MYFIRSTWEDGETS_H
#define MYFIRSTWEDGETS_H

#include <QMainWindow>

namespace Ui {
class MyFirstWedgets;
}

class MyFirstWedgets : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyFirstWedgets(QWidget *parent = 0);
    ~MyFirstWedgets();

private:
    Ui::MyFirstWedgets *ui;
    struct Private;
    struct Private *d;
};

#endif // MYFIRSTWEDGETS_H
