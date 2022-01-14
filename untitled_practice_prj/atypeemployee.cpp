#include "atypeemployee.h"

AtypeEmployee::AtypeEmployee(string name):employee(name, 'A'){

}
void AtypeEmployee::showNametype(){
    showName();
    cout << "A 타임 근무 : 오전 8시 출근 오후 5시 퇴근입니다." << endl;
}
void AtypeEmployee :: getRealtime(){
    cout<< "출근 시간 입력 : ";
    cin >> realIn;
    massegeIn();
    cout<<"\n"<<"퇴근 시간 입력 : ";
    cin>>realOut;
    massegeOut();
}
int AtypeEmployee :: CalWorkTime(){
    int diffin, diffout;
    diffin=realIn-8;
    diffout=realOut-17;
    return -(diffin-diffout)+8;
}
void AtypeEmployee :: massegeIn(){
    if(realIn>8)
        cout<<"Late!"<<endl;
    else
        cout<<"Have a good time"<<endl;
}
void AtypeEmployee :: massegeOut(){
    if(realOut>17)
        cout<<"Push botton\n"<<endl;
    else if(realOut<16)
        cout<<"Too early\n"<<endl;
    else
        cout<<"Good Bye\n"<<endl;
}
