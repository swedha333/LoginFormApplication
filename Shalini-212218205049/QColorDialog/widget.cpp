#include "widget.h"
#include "ui_widget.h"
#include<QColor>
#include <QColorDialog>
#include <QFont>
#include <QFontDialog>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label->setAutoFillBackground(true);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QPalette a = ui->label->palette();
    QColor b = a.color(QPalette::WindowText);
    QColor choosencolor = QColorDialog::getColor(b,this,"Choose color");
    if(choosencolor.isValid())
    {
        a.setColor(QPalette::WindowText,choosencolor);
        ui->label->setPalette(a);
    }

}

void Widget::on_pushButton_2_clicked()
{
    QPalette a = ui->label->palette();
    QColor b = a.color(QPalette::Window);
    QColor choosencolor = QColorDialog::getColor(b,this,"Choose color");
    if(choosencolor.isValid())
    {
        a.setColor(QPalette::Window,choosencolor);
        ui->label->setPalette(a);

    }
}

void Widget::on_pushButton_3_clicked()
{
    bool ok;
    QFont s=QFontDialog::getFont(&ok,QFont("Times new roman,19"),this);
    if(ok)
    {
        ui->label->setFont(s);
    }
    else
    {
        QMessageBox::information(this,"Shalini-212218205049","select correct font");
    }
}
