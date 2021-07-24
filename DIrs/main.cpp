#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString mPath = "$HOME";

    QDir mDir(mPath);

    foreach(QFileInfo mitm, mDir.entryInfoList()){
        qDebug() << mitm.absoluteFilePath();
    }

    return a.exec();
}
