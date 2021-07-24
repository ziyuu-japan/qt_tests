#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    for(int i=0; i<10; i++){
        ui->comboBox->addItem(QString::number(i) + " item");
    }

}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this, "Title", ui->comboBox->currentText());
}

