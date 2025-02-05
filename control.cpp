#include "control.h"
#include "ui_control.h"

control::control(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::control)
{
    ui->setupUi(this);
}

control::~control()
{
    delete ui;
}
