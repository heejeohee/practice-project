#include "employeehandler.h"
#include <atypeemployee.h>
#include <btypeemployee.h>
#include<ctypeemployee.h>

employeeHandler::employeeHandler(){listnum=0;}

void employeeHandler::Addemployee(int empCount){
    for(int i=0;i<empCount;i++){
        cout<< "write your name : "<<endl;
        cin>>you;
        cout<< "write your type : "<<endl;
        cin>>timeType;

        if(timeType=='A'){
            AtypeEmployee *person1= new AtypeEmployee(you);
            PerList[listnum++]=person1;}
        if(timeType=='B'){
            BtypeEmployee *person2= new BtypeEmployee(you);
            PerList[listnum++]=person2;}
        if(timeType=='C'){
            CtypeEmployee *person3= new CtypeEmployee(you);
            PerList[listnum++]=person3;}
    }
}
void employeeHandler::ShowAlllist(){
    for(int i=0;i<listnum;i++) {cout<<i<<" ";
        PerList[i]->showName();
        cout<<endl;}
}
void employeeHandler::ShowNandT(int k){
    PerList[k]->showNametype();
}
void employeeHandler::Getreal(int k){
    PerList[k]->getRealtime();
}

