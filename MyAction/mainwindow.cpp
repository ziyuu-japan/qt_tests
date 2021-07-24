#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_actionEdit_triggered()
{
    QMessageBox::information(this, "Title", "Edit Clicked");
}


void MainWindow::on_actionNe_triggered()
{
    QMessageBox::information(this, "Title", "New Clicked");
}


void MainWindow::on_actionOpen_triggered()
{
    QMessageBox::information(this, "Title", "Open Clicked");
}

