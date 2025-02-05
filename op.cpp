#include "op.h"
#include "ui_op.h"

op::op(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::op)
{
    ui->setupUi(this);
}

op::~op()
{
    delete ui;
}
