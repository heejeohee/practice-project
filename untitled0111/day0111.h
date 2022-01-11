#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int sum;
    QString recogName = "홍 길동";
    QStringList phonebookList;
    QStringList QString_filter(const QStringList *that, const QString &str);

};

#endif // MAINWINDOW_H
