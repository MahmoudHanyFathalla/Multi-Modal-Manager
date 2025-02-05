#ifndef EDIT_H
#define EDIT_H

#include <QDialog>
#include <QMainWindow>
namespace Ui {
class edit;
}

class edit : public QDialog
{
    Q_OBJECT

public:
    explicit edit(QWidget *parent = nullptr);
    ~edit();

private:
    Ui::edit *ui;
};

#endif // EDIT_H
