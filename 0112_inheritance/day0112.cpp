#include "day0112.h"
#include "ui_day0112.h"

day0112::day0112(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::day0112)
{
    ui->setupUi(this);
}

day0112::~day0112()
{
    delete ui;
}
