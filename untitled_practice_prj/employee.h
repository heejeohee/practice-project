#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <cstring>
using namespace std;
class employee
{
protected:
    string Name;
    char Type;
public:
    employee(string N, char T);
    void showName();
    virtual void getRealtime()=0;
    virtual void showNametype()=0;
    virtual int CalWorkTime()=0;
    virtual void massegeOut()=0;
    virtual void massegeIn()=0;
    ~employee();
};


#endif // EMPLOYEE_H
