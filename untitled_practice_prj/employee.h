#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <cstring>
using namespace std;
class employee
{
public:
    employee(){};
    virtual void getRealtime()=0;
    virtual int CalWorkTime()=0;
    virtual void massegeOut()=0;
    virtual void massegeIn()=0;
    virtual int Searchname(string fname)=0;
    virtual void Choicework()=0;
    virtual void Working()=0;
    virtual void Pay()=0;
    ~employee(){};
};


#endif // EMPLOYEE_H
