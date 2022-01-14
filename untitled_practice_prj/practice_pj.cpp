#include "practice_pj.h"
#include "ui_practice_pj.h"

practice_pj::practice_pj(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::practice_pj)
{
    ui->setupUi(this);
}

practice_pj::~practice_pj()
{
    delete ui;
}
