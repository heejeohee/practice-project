#ifndef EMPLOYEEHANDLER_H
#define EMPLOYEEHANDLER_H
#pragma once
#include <employee.h>
#define SIZE 100

class employeeHandler
{
    employee* PerList[SIZE];
    int listnum;
    char timeType;
    string you;
public:
    employeeHandler();
    void Addemployee(int empCount);
    void ShowAlllist();
    void ShowNandT(int k);
    void Getreal(int k);

};

#endif // EMPLOYEEHANDLER_H
