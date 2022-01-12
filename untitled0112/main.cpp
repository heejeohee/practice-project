#include "day0112.h"
#include <QApplication>
#include <QtCore/QCoreApplication>
#include <iostream>
#include<QDebug>

using namespace std;
class loc{
   int longitude, latitude;
public:
   loc(){}
   loc(int lg, int lt){
       longitude = lg;
       latitude = lt;
   }

    void show(){
     cout<< longitude <<" ";
     cout<< latitude <<"\n";
    }
    loc operator+(loc op2);
    loc operator,(loc op2);
};
loc loc::operator ,(loc op2){
    loc temp;
    temp.longitude=op2.longitude;
    temp.latitude=op2.latitude;
    cout<<op2.longitude<<" "<<op2.latitude<<"\n";
    return temp;
}
loc loc::operator+(loc op2){	//loc에 대해 +를 중복한다
    loc temp;
    temp.longitude=op2.longitude + longitude;
    temp.latitude = op2.latitude + latitude;
    return temp;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    loc ob1(10,20),ob2(5,30),ob3(1,1);
    ob1.show();
    ob2.show();
    ob3.show();
    cout<<"\n";
    ob1 = (ob1,ob2+ob2,ob3);
    ob1.show();
   return 0;
    //day0112 w;
   // w.show();

   //return a.exec();
}

