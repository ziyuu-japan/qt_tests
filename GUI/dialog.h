#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTreeWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

    void AddRoute(QString name, QString Description);
    void AddChild(QTreeWidgetItem *parent, QString name, QString Description);

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
