#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "mythread.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
    MyThread *mythread;

private:
    Ui::Dialog *ui;

public slots:
    void onNumberChanged(int i);
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};
#endif // DIALOG_H
