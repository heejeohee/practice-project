#include "calculator.h"

Calculator::Calculator(QWidget *parent):QWidget(parent){
    int i;
    flag = 0;
    operate;

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
    QObject::connect(pushbutton[1],SIGNAL(clicked()),SLOT(click_1()));//2
    QObject::connect(pushbutton[2],SIGNAL(clicked()),SLOT(click_2()));//3
    QObject::connect(pushbutton[3],SIGNAL(clicked()),SLOT(click_3()));//AC
    QObject::connect(pushbutton[4],SIGNAL(clicked()),SLOT(click_4()));//4
    QObject::connect(pushbutton[5],SIGNAL(clicked()),SLOT(click_5()));//5
    QObject::connect(pushbutton[6],SIGNAL(clicked()),SLOT(click_6()));//6
    QObject::connect(pushbutton[7],SIGNAL(clicked()),SLOT(click_7()));//x
    QObject::connect(pushbutton[8],SIGNAL(clicked()),SLOT(click_8()));//7
    QObject::connect(pushbutton[9],SIGNAL(clicked()),SLOT(click_9()));//8
    QObject::connect(pushbutton[10],SIGNAL(clicked()),SLOT(click_10()));//9
    QObject::connect(pushbutton[11],SIGNAL(clicked()),SLOT(click_11()));// /
    QObject::connect(pushbutton[12],SIGNAL(clicked()),SLOT(click_12()));//+
    QObject::connect(pushbutton[13],SIGNAL(clicked()),SLOT(click_13()));//0
    QObject::connect(pushbutton[14],SIGNAL(clicked()),SLOT(click_14()));//-
    QObject::connect(pushbutton[15],SIGNAL(clicked()),SLOT(click_15()));//=

}
void Calculator::click_13(){        // 0

    float number =0;
    if(!flag)number=m_OutLabel->text().toDouble()*10;
    number1.setNum(number);

    m_OutLabel->setText(number1);
    flag=0;
}
void Calculator::click_0(){
    float number =0;
    if(!flag)number=m_OutLabel->text().toDouble()*10;
    number1.setNum(number+1);

    m_OutLabel->setText(number1);
    flag=0;
}
void Calculator::click_1(){
    float number =0;
    if(!flag)number=m_OutLabel->text().toDouble()*10;
    number1.setNum(number+2);

    m_OutLabel->setText(number1);
    flag=0;
}
void Calculator::click_2(){
    float number =0;
    if(!flag)number=m_OutLabel->text().toDouble()*10;
    number1.setNum(number+3);

    m_OutLabel->setText(number1);
    flag=0;
}
void Calculator::click_4(){
    float number =0;
    if(!flag)number=m_OutLabel->text().toDouble()*10;
    number1.setNum(number+4);

    m_OutLabel->setText(number1);
    flag=0;
}
void Calculator::click_5(){
    float number =0;
    if(!flag)number=m_OutLabel->text().toDouble()*10;
    number1.setNum(number+5);

    m_OutLabel->setText(number1);
    flag=0;
}
void Calculator::click_6(){
    float number =0;
    if(!flag)number=m_OutLabel->text().toDouble()*10;
    number1.setNum(number+6);

    m_OutLabel->setText(number1);
    flag=0;
}
void Calculator::click_8(){
    float number =0;
    if(!flag)number=m_OutLabel->text().toDouble()*10;
    number1.setNum(number+7);

    m_OutLabel->setText(number1);
    flag=0;
}
void Calculator::click_9(){
    float number =0;
    if(!flag)number=m_OutLabel->text().toDouble()*10;
    number1.setNum(number+8);

    m_OutLabel->setText(number1);
    flag=0;
}
void Calculator::click_10(){
    float number =0;
    if(!flag)number=m_OutLabel->text().toDouble()*10;
    number1.setNum(number+9);

    m_OutLabel->setText(number1);
    flag=0;
}
void Calculator::click_12(){        //+
    if(number2.toFloat()){
        number1.setNum(number2.toFloat()+m_OutLabel->text().toFloat());
        //number1.sprintf("%f", number2.toFloat()+m_OutLabel->text().toFloat());
        m_OutLabel->setText(number1);
    }

    number2=number1;
    operate=flag=1;
}
void Calculator::click_14(){        // -
    if(number2.toFloat()){
        number1.setNum(number2.toFloat()-m_OutLabel->text().toFloat());
        m_OutLabel->setText(number1);
    }

    number2=number1;
    operate=flag=2;
}
void Calculator::click_7(){            //x
    if(number2.toFloat()){
        number1.setNum(number2.toFloat()*m_OutLabel->text().toFloat());
        m_OutLabel->setText(number1);
    }

    number2=number1;
    operate=flag=3;
}
void Calculator::click_11(){            //   /
    if(number2.toFloat()){
        number1.setNum(number2.toFloat()/m_OutLabel->text().toFloat());
        m_OutLabel->setText(number1);
    }

    number2=number1;
    operate=flag=4;
}
void Calculator::click_3(){              //  AC

    number1.setNum(0);
    number2=number1;
    operate=flag=0;
    m_OutLabel->setText("0");
}
void Calculator::click_15(){

    if(operate==1){
        number1.setNum(number2.toFloat()+m_OutLabel->text().toFloat());
        m_OutLabel->setText(number1);
    }
    else if(operate==2){
        number1.setNum(number2.toFloat()-m_OutLabel->text().toFloat());
        m_OutLabel->setText(number1);
    }
    else if(operate==3){
        number1.setNum(number2.toFloat()*m_OutLabel->text().toFloat());
        m_OutLabel->setText(number1);
    }
    else if(operate==4){
        number1.setNum(number2.toFloat()/m_OutLabel->text().toFloat());
        m_OutLabel->setText(number1);
    }

    number2.setNum(0);
    operate=flag=0;
}
