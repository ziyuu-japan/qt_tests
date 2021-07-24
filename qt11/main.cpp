#include <QCoreApplication>
#include <QDir>
#include <QFileInfo>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // ホームディレクトリ内のすべてのファイル・ディレクトリを表示する
    QDir h_dir("/home/furuta");

    foreach(QFileInfo item, h_dir.entryInfoList())
    {
        qDebug() << item.absoluteFilePath();
        if(item.isDir()){
            qDebug() << "Dir";
        }
        if(item.isFile()){
            qDebug() << "File";
        }
    }

    if(!h_dir.exists("ZZZ")){
        h_dir.mkpath("ZZZ");
        qDebug() << "File Created.";
    } else {
        qDebug() << "File Already Existing";
    }

    return a.exec();
}
