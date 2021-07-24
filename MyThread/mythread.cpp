#include "mythread.h"

#include <QDebug>

MyThread::MyThread(QObject *parent) : QThread(parent)
{

}

void MyThread::run()
{
    qDebug() << this->name << " Running";

    for(int i=0; i<10; i++){
        QMutex mutex;
        mutex.lock();
        if(this->stop){
            break;
        }
        mutex.unlock();
        qDebug() << this->name << " " << i;
    }
}
