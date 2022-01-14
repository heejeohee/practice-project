#include "practice_pj.h"
#include <QApplication>
#include <iostream>
#include <cstring>
#include<employee.h>
#include <atypeemployee.h>
#include <btypeemployee.h>
#include<ctypeemployee.h>
#include <employeehandler.h>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

     int j=0, people;

    employeeHandler handler;
    cout<<"How many people upload here? : "<< endl;
    cin >> people;
    handler.Addemployee(people);

    for(j=0;j<people;j++){
    handler.ShowNandT(j);
    handler.Getreal(j);
    }
    handler.ShowAlllist();
    practice_pj w;
    w.show();

    return a.exec();
}
