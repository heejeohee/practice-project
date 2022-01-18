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
    int Getlistnum();
    void Addemployee();
    void ShowAlllist();
    void ShowNandT(int k);
    void Getreal();
    void ChoiceWork();
    void Work();
    void getPay();

};

#endif // EMPLOYEEHANDLER_H
