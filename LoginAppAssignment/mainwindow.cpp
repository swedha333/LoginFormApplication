#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

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
  QString u=ui->lineEdit->text();
  QString p=ui->lineEdit_2->text();
  if(u=="samathmika"&&p=="212218205044")
  {
      QMessageBox::information(this,"Success","Login Successful!");
      l=new Dialog(this);
      l->show();
      ui->statusbar->showMessage("App will be killed within 5 seconds",5000);


  }
  else
  {
      QMessageBox::warning(this,"Error","Incorrect Username or Password");
  }
}
