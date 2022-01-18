#include "practice_pj.h"
#include <QApplication>
#include <iostream>
#include <cstring>
#include<employee.h>
#include <A_employee.h>
#include <B_employee.h>
#include<C_employee.h>
#include<normal_employee.h>
#include <employeehandler.h>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    int control=0;
    employeeHandler handler;
    employeeHandler listhandler;
    AtypeEmployee *person1= new AtypeEmployee("elsa",'A');
    listhandler.makelist(person1);
    BtypeEmployee *person2= new BtypeEmployee("anna",'C');
    listhandler.makelist(person2);
    CtypeEmployee *person3= new CtypeEmployee("olraf",'B');
    listhandler.makelist(person3);
    normal_employee *person4= new normal_employee("sben",'B');
    listhandler.makelist(person4);

    while(control!=7){
        cout<<"-------------------------"<<endl;
        cout<< " 1.등록 하기\n 2.출퇴근시간 입력\n 3.업무 등록\n 4.업무 진도\n 5.급여 조회\n 6.직원 목록\n 7.종료"<<endl;
        cout<<"-------------------------"<<endl;
        cin>>control;
        cout<<"\n";
        /*
        if(control==1)
            handler.Addemployee();
        else if(control==2)
            handler.Getreal();
        else if(control==3)
            handler.ChoiceWork();
        else if(control==4)
            handler.Work();
        else if(control==5)
            handler.getPay();
        else if(control==6) handler.ShowAlllist();
        else if(control==7)    cout<<"-----Good Bye-----\n";
        else cout<< "!!ERROR!!"<<endl;
        */
        if(control==1)
            listhandler.Addemployee();
        else if(control==2)
            listhandler.Getreal();
        else if(control==3)
            listhandler.ChoiceWork();
        else if(control==4)
            listhandler.Work();
        else if(control==5)
            listhandler.getPay();
        else if(control==6) listhandler.ShowAlllist();
        else if(control==7)    cout<<"-----Good Bye-----\n";
        else cout<< "!!ERROR!!"<<endl;
    }
    return 0;



    // practice_pj w;
    // w.show();

    //return a.exec();
}
