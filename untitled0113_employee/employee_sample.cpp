#include "employee_sample.h"
#include "ui_first_seminar.h"

first_seminar::first_seminar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::first_seminar)
{
    ui->setupUi(this);
}

first_seminar::~first_seminar()
{
    delete ui;
}
