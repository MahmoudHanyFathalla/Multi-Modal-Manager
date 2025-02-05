#ifndef CONTROL_H
#define CONTROL_H

#include <QDialog>
#include <QMainWindow>
namespace Ui {
class control;
}

class control : public QDialog
{
    Q_OBJECT

public:
    explicit control(QWidget *parent = nullptr);
    ~control();

private:
    Ui::control *ui;
};

#endif // CONTROL_H
