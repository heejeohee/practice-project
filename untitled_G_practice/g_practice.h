#ifndef G_PRACTICE_H
#define G_PRACTICE_H

#include <QMainWindow>

namespace Ui {
class G_practice;
}

class G_practice : public QMainWindow
{
    Q_OBJECT

public:
    explicit G_practice(QWidget *parent = 0);
    ~G_practice();

private slots:
    void on_pushButton_clicked();

private:
    Ui::G_practice *ui;
};

#endif // G_PRACTICE_H
