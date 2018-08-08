#ifndef SPLITERWIDGET_H
#define SPLITERWIDGET_H

#include <QWidget>
#include "QSettings"

namespace Ui {
class SpliterWidget;
}

class SpliterWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SpliterWidget(QWidget *parent = 0);
    ~SpliterWidget();

protected:
    void closeEvent(QCloseEvent* e);

private slots:
    void on_check_opaqueResize_toggled(bool checked);
    void on_check_collapsible_toggled(bool checked);

private:
    Ui::SpliterWidget *ui;
    QByteArray state;
    QSettings settings;
};

#endif // SPLITERWIDGET_H
