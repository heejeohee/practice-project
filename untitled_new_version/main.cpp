#include "practice_pj_new.h"
#include <QApplication>
#include <iostream>
#include <cstring>
#include<employee.h>
#include <all_employee.h>
#include <employeehandler.h>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    int control=0;
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
        if(cin.fail()) cout<<"!!번호를 입력하세요!!"<<endl;
        cin.clear();            //quite error
        cin.ignore(256,'\n');   //reset control

        if(control==1)
            listhandler.Addemployee();
        else if(control<6){
            listhandler.Function(control);
        }
        else if(control==6) listhandler.ShowAlllist();
        else if(control!=7) cout << "!!ERROR!!"<<endl;
    }
    cout<<"-----Good Bye-----\n";
    return 0;



    // practice_pj w;
    // w.show();

    //return a.exec();
}
