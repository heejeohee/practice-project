/*
#include <iostream>
#include <vector>
#include <string>
#include <abstract.h>
*/
#include "g_practice.h"
#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QLabel>
#include <QObject>
#include <calculator.h>


using namespace std;
/*
class Calculator : public QWidget{
/    Q_OBJECT
public:
    Calculator(QWidget*parent=0);
private:
    QPushButton *pushbutton[16];
    QLabel*m_OutLabel;
    QString number1;
    QString number2;
    QString output;

    char flag;
    char operate;
    const char* ButtonChar[16]={"0","1","2","3","4","5","6","7","8","9","10(+)","11(-)","12(X)","13(/)","14","15"};
    //{"1","2","3","AC","4","5","6","C","7","8","9","X","+","0","-","/"};

public slots:
    void click_0();
    void click_1();
    void click_2();
    void click_3();
    void click_4();
    void click_5();
    void click_6();
    void click_7();
    void click_8();
    void click_9();
    void click_10();
    void click_11();
    void click_12();
    void click_13();
    void click_14();
    void click_15();
    void click_16();

};
Calculator::Calculator(QWidget *parent):QWidget(parent){
    int i;
    flag = 0;
    operate=0;

    resize(250, 150);

    QBoxLayout *vboxlayout = new QVBoxLayout(this);
    vboxlayout->setMargin(10);

    m_OutLabel=new QLabel(this);
    m_OutLabel->setText("0");
    m_OutLabel->setAlignment(Qt::AlignRight);       //정렬형식
    m_OutLabel->setFrameShape(QFrame::Box);
    vboxlayout->addWidget(m_OutLabel);      //QVbox에 QLabel

    QGridLayout *grid = new QGridLayout();
    for(i=0;i<16;i++){
        pushbutton[i]=new QPushButton(ButtonChar[i],this);
        grid->addWidget(pushbutton[i],i/4,i%4);
    }//계산기 화면을 버튼 4개씩 격자무늬로

    vboxlayout->addLayout(grid);
    QObject::connect(pushbutton[0],SIGNAL(clicked()), SLOT(click_0()));//1
    QObject::connect(pushbutton[1],SIGNAL(clicked()),SLOT(m_OutLabel->setText("1")));//2
    QObject::connect(pushbutton[2],SIGNAL(clicked()),SLOT(click_2()));//3
    QObject::connect(pushbutton[3],SIGNAL(clicked()),SLOT(click_3()));//AC
    QObject::connect(pushbutton[4],SIGNAL(clicked()),SLOT(click_4()));
    QObject::connect(pushbutton[5],SIGNAL(clicked()),SLOT(click_5()));
    QObject::connect(pushbutton[6],SIGNAL(clicked()),SLOT(click_6()));
    QObject::connect(pushbutton[7],SIGNAL(clicked()),SLOT(click_7()));
    QObject::connect(pushbutton[8],SIGNAL(clicked()),SLOT(click_8()));
    QObject::connect(pushbutton[9],SIGNAL(clicked()),SLOT(click_9()));
    QObject::connect(pushbutton[10],SIGNAL(clicked()),SLOT(click_10()));

}
void Calculator::click_0(){

    float number =0;
    if(!flag)number=m_OutLabel->text().toFloat()*10;
    number1.setNum(number+1);

    m_OutLabel->setText(number1);
    flag=0;
}
void Calculator::click_1(){
    float number =1;
    if(!flag)number=m_OutLabel->text().toFloat()*10+1;
    number1.setNum(number+1);

    m_OutLabel->setText("1");
    flag=0;
}
void Calculator::click_14(){
    if(number2.toFloat()){
        number1.sprintf("%f", number2.toFloat()*m_OutLabel->text().toFloat());
        m_OutLabel->setText(number1);
    }

    number2=number1;
    operate=flag=3;
}
*/
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Calculator cal;
    cal.show();
    //G_practice w;
    // w.show();

    return app.exec();
}
