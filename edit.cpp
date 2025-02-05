#include "edit.h"
#include "ui_edit.h"

edit::edit(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::edit)
{
    ui->setupUi(this);
}

edit::~edit()
{
    delete ui;
}
