#ifndef PRACTICE_PJ_H
#define PRACTICE_PJ_H

#include <QMainWindow>

namespace Ui {
class practice_pj;
}

class practice_pj : public QMainWindow
{
    Q_OBJECT

public:
    explicit practice_pj(QWidget *parent = 0);
    ~practice_pj();

private:
    Ui::practice_pj *ui;
};

#endif // PRACTICE_PJ_H
