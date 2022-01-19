#include "A_employee.h"

AtypeEmployee::AtypeEmployee(string name, char timeType):BaseEmployee(name, timeType, 1){

}

void AtypeEmployee :: getRealtime(){
    BaseEmployee::getRealtime();
}
int AtypeEmployee :: CalWorkTime(){
    return realOut-realIn-9;        //기준 근무시간인 8시간과의 차이
}
void AtypeEmployee :: messageIn(){
    BaseEmployee::messageIn();
}
void AtypeEmployee :: messageOut(){
    BaseEmployee::messageOut();
}
int AtypeEmployee:: Searchname(string fname){
  //  int anwser=BaseEmployee::Searchname(fname);
  //  return anwser;
   return BaseEmployee::Searchname(fname);
}
void AtypeEmployee::Choicework(){
    BaseEmployee::Choicework();
    progress=0.0;
}
void AtypeEmployee :: Working(){
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
        if(ins=='W') { progress+=1.0/(worklevel*2);
            for(int t=0;t<worklevel*10*(1-progress);t++)
                cout<<"□";--i;
            if(progress==1.0){cout<<"\nComplete\n"; break;}}
        else if(ins=='E') break;
        else {i--; cout<<"Insert again\n";}
    }
}
void AtypeEmployee ::Pay(){
    int money;
    money=500+worklevel*progress*10;
    cout<<"\n이번 달 급여는 "<<money<<"만원 예정입니다.\n";
}

