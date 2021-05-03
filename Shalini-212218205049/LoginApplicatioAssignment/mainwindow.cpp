#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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
    QString user = ui->lineEdit->text();
    QString pass = ui->lineEdit_2->text();
    if(user=="shalini"&&pass=="212218205049")
    {
       QMessageBox::information(this,"Login","Login Successful");
       s=new Dialog(this);
       s->show();
       ui->statusbar->showMessage("App will be killed within 6secs",6000);
    }
    else
    {
        QMessageBox::warning(this,"Login","Login UnSuccessful");
    }
}

void MainWindow::on_pushButton_2_clicked()
{
   QMessageBox::warning(this,"Cancel","Quit the Application");
}
