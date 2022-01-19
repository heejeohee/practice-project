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
    virtual void messageOut()=0;
    virtual void messageIn()=0;
    virtual int Searchname(string fname)=0;
    virtual void Choicework()=0;
    virtual void Working()=0;
    virtual void Pay()=0;
    ~employee(){};
};


#endif // EMPLOYEE_H
