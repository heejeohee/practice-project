#ifndef EMPLOYEEHANDLER_H
#define EMPLOYEEHANDLER_H
#pragma once
#include <employee.h>
#include <base_employee.h>
#define SIZE 100

class employeeHandler
{
    BaseEmployee* PerList[SIZE];
    int listnum=0, ranknum;
    char timeType;
    string you;
public:
    employeeHandler();
    void makelist(BaseEmployee*p);
    void Addemployee();
    void ShowAlllist();
    void Function(int ctrl);
};

#endif // EMPLOYEEHANDLER_H
