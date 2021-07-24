#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QObject>
#include <QMutex>

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(QObject *parent = nullptr);
    void run();
    bool stop;

signals:
    void NumberChanged(int i);
};

#endif // MYTHREAD_H
