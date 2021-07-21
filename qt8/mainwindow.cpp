#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    button1 = new QPushButton("button1");
    button2 = new QPushButton("button2");
    button3 = new QPushButton("button3");

    vlayout = new QVBoxLayout();
    vlayout->addWidget(button1);
    vlayout->addWidget(button2);
    vlayout->addWidget(button3);

    widget = new QWidget();
    widget->setLayout(vlayout);

    this->setCentralWidget(widget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

