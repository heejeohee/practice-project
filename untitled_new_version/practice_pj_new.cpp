#include "practice_pj_new.h"
#include "ui_practice_pj_new.h"

practice_pj_new::practice_pj_new(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::practice_pj_new)
{
    ui->setupUi(this);
}

practice_pj_new::~practice_pj_new()
{
    delete ui;
}
