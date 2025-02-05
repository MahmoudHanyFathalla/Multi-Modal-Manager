#ifndef OP_H
#define OP_H

#include <QDialog>
#include <QMainWindow>
namespace Ui {
class op;
}

class op : public QDialog
{
    Q_OBJECT

public:
    explicit op(QWidget *parent = nullptr);
    ~op();

private:
    Ui::op *ui;
};

#endif // OP_H
