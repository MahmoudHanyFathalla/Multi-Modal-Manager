#ifndef SELECT_H
#define SELECT_H

#include <QDialog>
#include <QMainWindow>
namespace Ui {
class select;
}

class select : public QDialog
{
    Q_OBJECT

public:
    explicit select(QWidget *parent = nullptr);
    ~select();

private:
    Ui::select *ui;
};

#endif // SELECT_H
