#include "mythread.h"

MyThread::MyThread(QObject *parent) : QThread(parent)
{
    stop = false;
}

void MyThread::run(){
    for(int i=0; i<1000000000; i++){
        QMutex mutex;
        mutex.lock();
        if(stop){
            mutex.unlock();
            break;
        }
        mutex.unlock();

        emit NumberChanged(i);
    }
}
