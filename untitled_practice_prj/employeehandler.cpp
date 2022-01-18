#include "employeehandler.h"
#include <A_employee.h>
#include <B_employee.h>
#include<C_employee.h>
#include<normal_employee.h>

employeeHandler::employeeHandler(){
}
void employeeHandler::makelist(BaseEmployee* p){
    PerList[listnum++]=p;
}
int employeeHandler::Getlistnum(){
    return listnum;
}
void employeeHandler::Addemployee(){

    int people;
    cout<<"등록할 인원을 입력하세요. : "<< endl;
    cin >> people;

    for(int i=0;i<people;i++){
        cout<< "이름을 입력하세요. : "<<endl;
        cin>>you;
        cout<< "근무 시간을 입력하세요. : "<<endl;
        cin>>timeType;
        cout<< "직책을 입력하세요. : "<<endl;
        cin>>ranknum;
        cout<<"\n";
        if(timeType>'C'||ranknum<1||ranknum>4) {cout<< "!Error!\n";i--;}
        else
        {if(ranknum==1){
                AtypeEmployee *person1= new AtypeEmployee(you,timeType);
                PerList[listnum++]=person1;}
            else if(ranknum==2){
                BtypeEmployee *person2= new BtypeEmployee(you,timeType);
                PerList[listnum++]=person2;}
            else if(ranknum==3){
                CtypeEmployee *person3= new CtypeEmployee(you,timeType);
                PerList[listnum++]=person3;}
            else if(ranknum==4){
                normal_employee *person4= new normal_employee(you,timeType);
                PerList[listnum++]=person4;}
        }
    }
}
void employeeHandler::ShowAlllist(){
    for(int i=0;i<listnum;i++) {cout<<i<<" ";
        PerList[i]->showName();
        cout<<endl;}
}
void employeeHandler::ShowNandT(int k){
    PerList[k]->showName();
    PerList[k]->showtype();
    PerList[k]->showrank();
    PerList[k]->showwork();
}
void employeeHandler::Getreal(){
    int idx=-1;
    string fname;
    cout<<"name : ";
    cin>> fname;

    for(int i=0;i<listnum;i++)
        if(PerList[i]->Searchname(fname)==1){ idx=i;break;}
    if(idx==-1) cout<<"목록에 없음\n";
    else PerList[idx]->getRealtime();
}
void employeeHandler::ChoiceWork(){
    int idx=-1;
    string fname;
    cout<<"name : ";
    cin>> fname;

    for(int i=0;i<listnum;i++)
        if(PerList[i]->Searchname(fname)==1) {idx=i;break;}
    if(idx==-1) cout<<"목록에 없음\n";
    else {PerList[idx]->Choicework();
        PerList[idx]->showName();}
}
void employeeHandler::Work(){
    int idx=-1;
    string fname;
    cout<<"name : ";
    cin>> fname;

    for(int i=0;i<listnum;i++)
        if(PerList[i]->Searchname(fname)==1){ idx=i;break;}
    if(idx==-1) cout<<"목록에 없음\n";
    else PerList[idx]->Working();
}
void employeeHandler::getPay(){
    int idx=-1;
    string fname;
    cout<<"name : ";
    cin>> fname;

    for(int i=0;i<listnum;i++)
        if(PerList[i]->Searchname(fname)==1){ idx=i;break;}
    if(idx==-1) cout<<"목록에 없음\n";
    else PerList[idx]->Pay();
}


