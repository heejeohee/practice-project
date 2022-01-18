#include "C_employee.h"

CtypeEmployee::CtypeEmployee(string name, char timeType):BaseEmployee(name, timeType, 3){

}

void CtypeEmployee:: getRealtime(){
    BaseEmployee::getRealtime();

}
int CtypeEmployee:: CalWorkTime(){
    return realOut-realIn-9;        //기준 근무시간인 8시간과의 차이
}
void CtypeEmployee:: massegeIn(){
    BaseEmployee::massegeIn();
}
void CtypeEmployee:: massegeOut(){
    BaseEmployee::massegeOut();
}
int CtypeEmployee:: Searchname(string fname){
    int anwser=BaseEmployee::Searchname(fname);
    return anwser;
}
void CtypeEmployee::Choicework(){
    BaseEmployee::Choicework();
    progress=0.0;
}
void CtypeEmployee ::Working(){
    char ins;
    cout<<"<<현재 진행도>>\n";
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

