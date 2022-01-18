#include "normal_employee.h"

normal_employee::normal_employee(string name, char timeType):BaseEmployee(name, timeType, 4){

}
void normal_employee:: getRealtime(){
    BaseEmployee::getRealtime();

}
int normal_employee:: CalWorkTime(){
    return realOut-realIn-1;    // 근무시간
}
void normal_employee:: massegeIn(){
    BaseEmployee::massegeIn();
}
void normal_employee:: massegeOut(){
    BaseEmployee::massegeOut();
}
int normal_employee:: Searchname(string fname){
    int anwser=BaseEmployee::Searchname(fname);
    return anwser;
}
void normal_employee::Choicework(){
    BaseEmployee::Choicework();
    progress=0;
}
void normal_employee::Working(){
    char ins;
    cout<<"<<현재 진행도>>\n";
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

