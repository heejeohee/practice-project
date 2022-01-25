#include "g_practice.h"
#include "ui_g_practice.h"

G_practice::G_practice(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::G_practice)
{
    ui->setupUi(this);
}

G_practice::~G_practice()
{
    delete ui;
}

void G_practice::on_pushButton_clicked()
{

}
