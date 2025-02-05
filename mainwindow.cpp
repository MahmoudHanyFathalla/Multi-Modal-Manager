#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "edit.h"
#include "select.h"
#include "control.h"
#include "op.h"
#include "dialog.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //this->close(); // to close the main window
    // Example: Open a new Edit window
    edit *editWindow = new edit(this);
    editWindow->show();

}



void MainWindow::on_pushButton_2_clicked()
{
    select *selectWindow = new select(this);
    selectWindow->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    control *controlWindow = new control(this);
    controlWindow->show();
}


void MainWindow::on_pushButton_4_clicked()
{
    op *controlWindow = new op(this);
    controlWindow->show();
}

