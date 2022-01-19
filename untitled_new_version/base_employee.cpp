#include "base_employee.h"
#include<cstring>

BaseEmployee::BaseEmployee(string N, char T, int R){
    Name=N; Type=T; Rank=R;
}
void BaseEmployee:: showName() {cout<< "이름 : " << Name <<endl;}
void BaseEmployee:: showtype(){
    if(Type=='A')     cout << "A 타임 근무 : 오전 8시 출근 오후 5시 퇴근입니다." << endl;
    else if(Type=='B') cout << "B 타임 근무 : 오전 9시 출근 오후 6시 퇴근입니다." << endl;
    else if(Type=='C') cout << "C 타임 근무 : 오전 10시 출근 오후 7시 퇴근입니다." << endl;
}
void BaseEmployee:: showrank(){
    if(Rank==1)     cout << "책임 연구원" << endl;
    else if(Rank==2) cout << "선임 연구원" << endl;
    else if(Rank==3) cout << "전임 연구원" << endl;
    else if(Rank==4) cout << "연구원" << endl;
}
void BaseEmployee::showwork(){
    if(1<=worklevel&&worklevel<=4) cout<<"work level : "<<worklevel<<endl;
    else cout<< "업무 미등록\n";
}
void BaseEmployee::getRealtime(){
    cout<< "출근 시간 입력 : ";
    cin >> realIn;
    messageIn();
    cout<<"\n"<<"퇴근 시간 입력 : ";
    cin>>realOut;
    messageOut();
}
int BaseEmployee:: CalWorkTime(){
    if(Rank==4)     return realOut-realIn-1;    // 근무시간
    else     return realOut-realIn-9;        //기준 근무시간인 8시간과의 차이
}
void BaseEmployee:: messageOut(){
    if(Type=='A'){
        if(realOut>17)
            cout<<"연장 근무 등록 완료\n"<<endl;
        else if(realOut<17)
            cout<<"조기 퇴근\n"<<endl;
        else
            cout<<"퇴근 등록 완료\n"<<endl;
    }
    else if(Type=='B'){
        if(realOut>18)
            cout<<"연장 근무 등록 완료\n"<<endl;
        else if(realOut<18)
            cout<<"조기 퇴근\n"<<endl;
        else
            cout<<"퇴근 등록 완료\n"<<endl;
    }
    else if(Type=='C'){
        if(realOut>19)
            cout<<"연장 근무 등록 완료\n"<<endl;
        else if(realOut<19)
            cout<<"조기 퇴근\n"<<endl;
        else
            cout<<"퇴근 등록 완료\n"<<endl;
    }
}
void BaseEmployee:: messageIn(){
    if(Type=='A'){
        if(realIn>8)
            cout<<"지각!"<<endl;
        else
            cout<<"출근 등록 완료"<<endl;
    }
    else if(Type=='B'){
        if(realIn>9)
            cout<<"지각!"<<endl;
        else
            cout<<"출근 등록 완료"<<endl;
    }
    else if(Type=='C'){
        if(realIn>10)
            cout<<"지각!"<<endl;
        else
            cout<<"출근 등록 완료"<<endl;
    }
}
int BaseEmployee ::Searchname(string fname){
    int answer;
    if(Name.compare(fname)==0) answer= 1;
    return answer;
}
void BaseEmployee::Choicework(){
   progress=0.0;
    for(int i=0;i<1;i++){
    cout<< "work level : " ;
    cin>>worklevel;
    if(worklevel>5-Rank||worklevel<1){i--; cout<<"work level 조정 필요\n";}
   }
}
