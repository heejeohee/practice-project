#include "B_employee.h"

BtypeEmployee::BtypeEmployee(string name, char timeType):BaseEmployee(name, timeType, 2){}

void BtypeEmployee :: getRealtime(){
    BaseEmployee::getRealtime();
}
int BtypeEmployee :: CalWorkTime(){
    return realOut-realIn-9;        //기준 근무시간인 8시간과의 차이
}
void BtypeEmployee :: messageIn(){
    BaseEmployee::messageIn();
}
void BtypeEmployee :: messageOut(){
    BaseEmployee::messageOut();
}
int BtypeEmployee:: Searchname(string fname){
    int anwser=BaseEmployee::Searchname(fname);
    return anwser;
}
void BtypeEmployee::Choicework(){
    BaseEmployee::Choicework();
    progress=0.0;
}
void BtypeEmployee ::Working(){
    char ins;
    cout<<"<<현재 진행도>>\n";
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

