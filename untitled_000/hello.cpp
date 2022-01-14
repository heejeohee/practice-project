#include "hello.h"
#include "ui_hello.h"
#include <QDebug>
#include <iostream>
#include <QStringList>
#define SIZE 100

using namespace std;
hello::hello(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::hello)
{
    ui->setupUi(this);

   /* qDebug()<<"Test\n";
    qDebug()<<"input : ";
    QString sample = "hong gil dong";
    phonebookList << "홍 길 동";
    phonebookList << "홍길 동";
    phonebookList << "홍 길동";
    phonebookList << "홍길동";
    phonebookList << "나는 홍길동 이다.";
    phonebookList << "홍길동 형";
    phonebookList << "홍길동 누나";
    phonebookList << "홍길동 아버지";
    phonebookList << "홍길동친구";
    phonebookList << "미디어젠 홍길동 연구원";
    phonebookList << "홍길동 미디어젠 연구원";
    QStringList result;
    QString temp, temp2;
    QStringList name;
    int len=recogName.length();
    int index = recogName.indexOf(" ", Qt::CaseInsensitive);
    qDebug() << len <<" "<< index;


    result = phonebookList.filter(recogName); // All have hong
    qDebug() << "filtering " << result << "\n";

   // if(result.at())

    char name[100];
    sprintf(name, "%s", (const string*) recogName.toStdString().c_str());
    for(int i=0;i<len;i++){
        qDebug() << name[i];
    }



    QString src="Hello";
    char test[100];
    sprintf(test, "%s",(const char*)src.toStdString().c_str());

    for(int i=0;i<6;i++){
        qDebug() << test[i];
    }
*/








}

hello::~hello()
{
    delete ui;
}

