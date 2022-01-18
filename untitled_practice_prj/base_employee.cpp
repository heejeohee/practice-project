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
    if(worklevel==4) cout << "Work level : 4\n";
    else if(worklevel==3) cout << "Work level : 3\n";
    else if(worklevel==2) cout << "Work level : 2\n";
    else if(worklevel==1) cout << "Work level : 1\n";
}
void BaseEmployee::getRealtime(){
    cout<< "출근 시간 입력 : ";
    cin >> realIn;
    massegeIn();
    cout<<"\n"<<"퇴근 시간 입력 : ";
    cin>>realOut;
    massegeOut();
}
int BaseEmployee:: CalWorkTime(){

}
void BaseEmployee:: massegeOut(){
    if(Type=='A'){
        if(realOut>17)
            cout<<"연장 근무 등록 완료\n"<<endl;
        else if(realOut<16)
            cout<<"조기 퇴근\n"<<endl;
        else
            cout<<"퇴근 등록 완료\n"<<endl;
    }
    else if(Type=='B'){
        if(realOut>18)
            cout<<"연장 근무 등록 완료\n"<<endl;
        else if(realOut<17)
            cout<<"조기 퇴근\n"<<endl;
        else
            cout<<"퇴근 등록 완료\n"<<endl;
    }
    else if(Type=='C'){
        if(realOut>19)
            cout<<"연장 근무 등록 완료\n"<<endl;
        else if(realOut<18)
            cout<<"조기 퇴근\n"<<endl;
        else
            cout<<"퇴근 등록 완료\n"<<endl;
    }
}
void BaseEmployee:: massegeIn(){
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

   for(int i=0;i<1;i++){
    cout<< "work level : " ;
    cin>>worklevel;
    if(Rank==4&&worklevel!=1){ i--; cout<<"work level 조정 필요\n";}
    else if (Rank==3&&(worklevel==3||worklevel==4)) { i--; cout<<"work level 조정 필요\n";}
   }
}
void BaseEmployee ::Working(){
 
}
void BaseEmployee ::Pay(){

}

