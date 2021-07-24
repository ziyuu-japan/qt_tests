#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    mythread = new MyThread(this);
    connect(mythread, SIGNAL(NumberChanged(int)), this, SLOT(onNumberChanged(int)));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::onNumberChanged(int i)
{
    ui->label->setText(QString::number(i));

}


void Dialog::on_pushButton_clicked()
{
    // start
     mythread->start();
}


void Dialog::on_pushButton_2_clicked()
{
    // stop
    mythread->stop = true;
}

