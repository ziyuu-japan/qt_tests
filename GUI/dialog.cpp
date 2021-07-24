#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>

void Dialog::AddRoute(QString name, QString Description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);
    itm->setText(0, name);
    itm->setText(1, Description);
    //ui->treeWidget->addTopLevelItem(itm);

    AddChild(itm, "one", "hello");
    AddChild(itm, "one", "hello");
}

void Dialog::AddChild(QTreeWidgetItem *parent, QString name, QString Description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem(parent);
    itm->setText(0, name);
    itm->setText(1, Description);
    parent->addChild(itm);
}

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->treeWidget->setColumnCount(2);
    AddRoute("hello", "world");
    AddRoute("hello2", "world");
    AddRoute("hello3", "world");
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this, "Title here", "Hello world");
}

