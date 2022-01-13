#ifndef FIRST_SEMINAR_H
#define FIRST_SEMINAR_H

#include <QMainWindow>

namespace Ui {
class first_seminar;
}

class first_seminar : public QMainWindow
{
    Q_OBJECT

public:
    explicit first_seminar(QWidget *parent = 0);
    ~first_seminar();

private:
    Ui::first_seminar *ui;
};

#endif // FIRST_SEMINAR_H
