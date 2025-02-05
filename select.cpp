#include "select.h"
#include "ui_select.h"

select::select(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::select)
{
    ui->setupUi(this);
}

select::~select()
{
    delete ui;
}
