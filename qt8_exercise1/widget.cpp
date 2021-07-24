#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("My App");

    glayout = new QGridLayout;
    label1 = new QLabel("Name:");
    label2 = new QLabel("Name:");
    line_edit1 = new QLineEdit;
    line_edit2 = new QLineEdit;

    glayout->addWidget(label1, 0, 0);
    glayout->addWidget(line_edit1, 0, 1);
    glayout->addWidget(label2, 1, 0);
    glayout->addWidget(line_edit2, 1, 1);

    button = new QPushButton("OK");
    glayout->addWidget(button, 2, 0, 1, 2);

    this->setLayout(glayout);
}

Widget::~Widget()
{
    delete ui;
}

