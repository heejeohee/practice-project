#ifndef DAY0112_H
#define DAY0112_H

#include <QMainWindow>

namespace Ui {
class day0112;
}

class day0112 : public QMainWindow
{
    Q_OBJECT

public:
    explicit day0112(QWidget *parent = 0);
    ~day0112();

private:
    Ui::day0112 *ui;
};

#endif // DAY0112_H
