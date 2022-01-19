#ifndef PRACTICE_PJ_NEW_H
#define PRACTICE_PJ_NEW_H

#include <QMainWindow>

namespace Ui {
class practice_pj_new;
}

class practice_pj_new : public QMainWindow
{
    Q_OBJECT

public:
    explicit practice_pj_new(QWidget *parent = 0);
    ~practice_pj_new();

private:
    Ui::practice_pj_new *ui;
};

#endif // PRACTICE_PJ_NEW_H
