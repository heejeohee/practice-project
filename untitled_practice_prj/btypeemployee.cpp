#include "btypeemployee.h"

BtypeEmployee::BtypeEmployee(string name):employee(name, 'B'){}
void BtypeEmployee :: showNametype(){
        showName();
        cout << "B 타임 근무 : 오전 9시 출근 오후 6시 퇴근입니다." << endl;
}
void BtypeEmployee :: getRealtime(){
        cout<< "출근 시간 입력 : ";
        cin >> realIn;
        massegeIn();
        cout<<"\n"<<"퇴근 시간 입력 : ";
        cin>>realOut;
        massegeOut();
}
int BtypeEmployee :: CalWorkTime(){
        int diffin, diffout;
        diffin=realIn-9;
        diffout=realOut-18;
        return -(diffin-diffout)+8;
    }
void BtypeEmployee :: massegeIn(){
        if(realIn>9)
            cout<<"Late!"<<endl;
        else
            cout<<"Have a good time"<<endl;
}
void BtypeEmployee :: massegeOut(){
        if(realOut>18)
            cout<<"Push botton\n"<<endl;
        else if(realOut<17)
            cout<<"Too early\n"<<endl;
        else
            cout<<"Good Bye\n"<<endl;
}
