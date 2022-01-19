#include "all_employee.h"

AtypeEmployee::AtypeEmployee(string name, char timeType):BaseEmployee(name, timeType, 1){
}
/*
void AtypeEmployee :: getRealtime(){
    BaseEmployee::getRealtime();
}
int AtypeEmployee :: CalWorkTime(){
    BaseEmployee::CalWorkTime();
}
void AtypeEmployee :: messageIn(){
    BaseEmployee::messageIn();
}
void AtypeEmployee :: messageOut(){
    BaseEmployee::messageOut();
}
void AtypeEmployee::Choicework(){
    BaseEmployee::Choicework();
}
int AtypeEmployee:: Searchname(string fname){
    int anwser=BaseEmployee::Searchname(fname);
    return anwser;
}
*/
void AtypeEmployee :: Working(){
    char ins;
    cout<<"<<현재 진행도>>\n";
    if(worklevel==0){cout<<"업무 미등록\n"<<endl;}
    if(progress==0.0){
        for(int t=0;t<worklevel*10;t++)
            cout<<"□";}
    else{
        for(int t=0;t<worklevel*10*(1-progress);t++)
            cout<<"□";
    }
    for(int i=0;i<1;i++){
        cout<<"\nInsert doing work 'W' or end 'E'\n";
        cin>>ins;
        if(ins=='W') { progress+=1.0/(worklevel*2.0);
            for(int t=0;t<worklevel*10*(1-progress);t++)
                cout<<"□";--i;
            if(progress>=1.0){cout<<"\nComplete\n"; progress=1.0; break;}}
        else if(ins=='E') break;
        else {i--; cout<<"Insert again\n";}
    }
}
void AtypeEmployee ::Pay(){
    int money;
    money=500+worklevel*progress*10;
    cout<<"\n이번 달 급여는 "<<money<<"만원 예정입니다.\n";
}

// /////////B//////////////


BtypeEmployee::BtypeEmployee(string name, char timeType):BaseEmployee(name, timeType, 2){}
/*
void BtypeEmployee :: getRealtime(){
    BaseEmployee::getRealtime();
}
int BtypeEmployee :: CalWorkTime(){
    BaseEmployee::CalWorkTime();
}
void BtypeEmployee :: messageIn(){
    BaseEmployee::messageIn();
}
void BtypeEmployee :: messageOut(){
    BaseEmployee::messageOut();
}
void BtypeEmployee::Choicework(){
    BaseEmployee::Choicework();
}
int BtypeEmployee:: Searchname(string fname){
    int anwser=BaseEmployee::Searchname(fname);
    return anwser;
}
*/
void BtypeEmployee ::Working(){
    char ins;
    cout<<"<<현재 진행도>>\n";
    if(worklevel==0){cout<<"업무 미등록\n"<<endl;}
    if(progress==0.0){
        for(int t=0;t<worklevel*10;t++)
            cout<<"□";}
    else{
        for(int t=0;t<worklevel*10*(1-progress);t++)
            cout<<"□";
    }
    for(int i=0;i<1;i++){
        cout<<"\nInsert doing work 'W' or end 'E'\n";
        cin>>ins;
        if(ins=='W') {progress+=1.0/(worklevel*5.0);
            for(int t=0;t<worklevel*10*(1-progress);t++)
                cout<<"□";--i;
            if(progress>=1.0){cout<<"\nComplete\n"; progress=1.0; break;}}
        else if(ins=='E') break;
        else {i--; cout<<"Insert again\n";}
    }
}
void BtypeEmployee ::Pay(){
    int money;
    money=400+worklevel*progress*5;
    cout<<"progress :"<<progress<<endl;
    cout<<"\n이번 달 급여는 "<<money<<"만원 예정입니다.\n";
}

// //////////////////////////////////////////////////////////
// //////////C/////////////

CtypeEmployee::CtypeEmployee(string name, char timeType):BaseEmployee(name, timeType, 3){
}
/*
void CtypeEmployee:: getRealtime(){
    BaseEmployee::getRealtime();
}
int CtypeEmployee:: CalWorkTime(){
    BaseEmployee::CalWorkTime();
}
void CtypeEmployee:: messageIn(){
    BaseEmployee::messageIn();
}
void CtypeEmployee:: messageOut(){
    BaseEmployee::messageOut();
}
void CtypeEmployee::Choicework(){
    BaseEmployee::Choicework();
}
int CtypeEmployee:: Searchname(string fname){
    int anwser=BaseEmployee::Searchname(fname);
    return anwser;
}
*/
void CtypeEmployee ::Working(){
    char ins;
    cout<<"<<현재 진행도>>\n";
    if(worklevel==0){cout<<"업무 미등록\n"<<endl;}
    if(progress==0.0){
        for(int t=0;t<worklevel*10;t++)
            cout<<"■";}
    else{
        for(int t=0;t<worklevel*10*progress;t++)
            cout<<"□";
        for(int t=0;t<worklevel*10*(1-progress);t++)
            cout<<"■";
    }
    for(int i=0;i<1;i++){
        cout<<"\nInsert doing work 'W' or end 'E'\n";
        cin>>ins;
        if(ins=='W') {progress+=1.0/(worklevel*4.0);
            for(int t=0;t<worklevel*10*progress;t++)
                cout<<"□";
            for(int t=0;t<worklevel*10*(1-progress);t++)
                cout<<"■";--i;
            if(progress>=1.0){cout<<"\nComplete\n"; progress=1.0; break;}}
        else if(ins=='E') break;
        else {i--; cout<<"Insert again\n";}
    }
}
void CtypeEmployee::Pay(){
    int money;
    money=300+worklevel*progress*5+CalWorkTime();       //지각비
    cout<<"progress :"<<progress<<endl;
    cout<<"\n이번 달 급여는 "<<money<<"만원 예정입니다.\n";
}

// //////////////////////////////////////////////////////
// ////////////////D/////////////////////////

normal_employee::normal_employee(string name, char timeType):BaseEmployee(name, timeType, 4){
}
/*
void normal_employee:: getRealtime(){
    BaseEmployee::getRealtime();
}
int normal_employee:: CalWorkTime(){
    BaseEmployee::CalWorkTime();
}
void normal_employee:: messageIn(){
    BaseEmployee::messageIn();
}
void normal_employee:: messageOut(){
    BaseEmployee::messageOut();
}
int normal_employee:: Searchname(string fname){
    int anwser=BaseEmployee::Searchname(fname);
    return anwser;
}
void normal_employee::Choicework(){
    BaseEmployee::Choicework();
}
*/
void normal_employee::Working(){
    char ins;
    cout<<"<<현재 진행도>>\n";
    if(worklevel==0){cout<<"업무 미등록\n"<<endl;}
    if(progress!=0){
        for(int t=0;t<worklevel*progress;t++)
            cout<<"■";
    }
    for(int i=0;i<1;i++){
        cout<<"\nInsert doing work 'W' or end 'E'\n";
        cin>>ins;
        if(ins=='W') {progress+=1;
            for(int t=0;t<worklevel*progress;t++)
                cout<<"■";--i;
            if(progress>=10){cout<<"\nComplete\n"; progress=10; break;}}
        else if(ins=='E') break;
        else {i--; cout<<"Insert again\n";}
    }
}
void normal_employee::Pay(){
    double todaymoney=CalWorkTime()*1.5;
    double money=todaymoney+19*8*1.5;
    cout<<"\n오늘 급여는 " << todaymoney <<"만원이고, 다른 이벤트 없을 시 이번 달 급여는 "<<money<<"만원 예정입니다.\n";
}







