#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    widget = new QWidget();
    vlayout = new QVBoxLayout();
    button1 = new QPushButton("one");
    button2 = new QPushButton("two");
    button3 = new QPushButton("three");

    vlayout->addWidget(button1);
    vlayout->addWidget(button2);
    vlayout->addWidget(button3);

    widget->setLayout(vlayout);

    this->setCentralWidget(widget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

