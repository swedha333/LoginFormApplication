#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QTimer>

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
        ui->label_3->setText("Login Successfully");
        QTimer::singleShot(4000, this, [this] () { ui->label_3->setText(""); });
    }
    else
    {
        ui->label_3->setText("Login Unsuccessful");
        QTimer::singleShot(4000, this, [this] () { ui->label_3->setText(""); });
    }
}
