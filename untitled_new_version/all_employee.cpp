#include "all_employee.h"

AtypeEmployee::AtypeEmployee(string name, char timeType):BaseEmployee(name, timeType, 1){}
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
    int money=500+worklevel*progress*10;
    cout<<"\n이번 달 급여는 "<<money<<"만원 예정입니다.\n";
}

// /////////B//////////////

BtypeEmployee::BtypeEmployee(string name, char timeType):BaseEmployee(name, timeType, 2){}
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
    int money=400+worklevel*progress*5;
    if(CalWorkTime()>0) money=money+CalWorkTime();
    cout<<"\n이번 달 급여는 "<<money<<"만원 예정입니다.\n";
}


// //////////C/////cout<<"progress :"<<progress<<endl;////////

CtypeEmployee::CtypeEmployee(string name, char timeType):BaseEmployee(name, timeType, 3){}

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
        if(ins=='W') {progress+=1.0/(worklevel*2.5);
            if(progress>=1.0) progress=1.0;
            for(int t=0;t<worklevel*10*progress;t++)
                cout<<"□";
            for(int t=0;t<worklevel*10*(1-progress);t++)
                cout<<"■";--i;
            if(progress==1.0){cout<<"\nComplete\n"; break;}}
        else if(ins=='E') break;
        else {i--; cout<<"Insert again\n";}
    }
}
void CtypeEmployee::Pay(){
    if(realIn!=0){
    int money=300+worklevel*progress*5+CalWorkTime();       //지각비
    cout<<"\n이번 달 급여는 "<<money<<"만원 예정입니다.\n";
    }
    else {int money=300+worklevel*progress*5;
        cout<<"\n이번 달 급여는 "<<money<<"만원 예정입니다.\n";}
}


// ////////////////D/////////////////////////

normal_employee::normal_employee(string name, char timeType):BaseEmployee(name, timeType, 4){}

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
    if(realIn!=0){
    double todaymoney=CalWorkTime()*1.5;
    double money=todaymoney+19*8*1.5;
    cout<<"\n오늘 급여는 " << todaymoney <<"만원이고, 다른 이벤트 없을 시 이번 달 급여는 "<<money<<"만원 예정입니다.\n";
    }
    else cout<<"\n오늘 근무가 등록되지 않았습니다. 다른 이벤트 없을 시 이번 달 급여는 "<<19*8*1.5<<"만원 예정입니다.\n";
}







