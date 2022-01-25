#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QGridLayout>

class Calculator : public QWidget{
       Q_OBJECT //Q_OBJECT는 사용자 정의 시그널과 슬롯을 사용할때 추가
public:
    Calculator(QWidget*parent=0);
private:
    QPushButton *pushbutton[16];
    QLabel*m_OutLabel;
    QString number1;
    QString number2;
    QString output;

    int flag;
    int operate;
    const char* ButtonChar[16]={"1","2","3","AC","4","5","6","x","7","8","9","/","+","0","-","="};

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
};
#endif // CALCULATOR_H
