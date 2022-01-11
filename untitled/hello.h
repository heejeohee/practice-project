#ifndef HELLO_H
#define HELLO_H

#include <QMainWindow>
//#include<QStringList>
namespace Ui {
class hello;
}

class hello : public QMainWindow
{
    Q_OBJECT

public:
    explicit hello(QWidget *parent = 0);
    ~hello();

private slots:
  //  void on_pushButton_clicked();

  //  void on_pushButton_2_clicked();

private:
    Ui::hello *ui;
    int sum;
    QString recogName = "홍 길동";
    QStringList phonebookList;
    QStringList QString_filter(const QStringList *that, const QString &str);


};

#endif // HELLO_H
