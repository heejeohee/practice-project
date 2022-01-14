#include "ctypeemployee.h"

CtypeEmployee::CtypeEmployee(string name):employee(name, 'C'){

}
void CtypeEmployee:: showNametype(){
    showName();
    cout << "C 타임 근무 : 오전 10시 출근 오후 7시 퇴근입니다." << endl;
}
void CtypeEmployee:: getRealtime(){
    cout<< "출근 시간 입력 : ";
    cin >> realIn;
    massegeIn();
    cout<<"\n"<<"퇴근 시간 입력 : ";
    cin>>realOut;
    massegeOut();
}
int CtypeEmployee:: CalWorkTime(){
    int diffin, diffout;
    diffin=realIn-10;
    diffout=realOut-19;
    return -(diffin-diffout)+8;
}
void CtypeEmployee:: massegeIn(){
    if(realIn>10)
        cout<<"Late!"<<endl;
    else
        cout<<"Have a good time"<<endl;
}
void CtypeEmployee:: massegeOut(){
    if(realOut>19)
        cout<<"Push botton\n"<<endl;
    else if(realOut<18)
        cout<<"Too early\n"<<endl;
    else
        cout<<"Good Bye\n"<<endl;
}
