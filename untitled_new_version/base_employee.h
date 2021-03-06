#ifndef BASEEMPLOYEE_H
#define BASEEMPLOYEE_H
#pragma once
#include <employee.h>

class BaseEmployee:public employee
{
protected:
    int Rank, worklevel=0;
    int realIn=0, realOut=0;
    double progress=0.0;
    string Name;
    char Type;
public:
    BaseEmployee(string N, char T, int R);
    ~BaseEmployee(){};
    void showName();
    void showtype();
    void showrank();
    void showwork();
    void getRealtime() override;
    int CalWorkTime() override;
    void messageOut() override;
    void messageIn() override;
    int Searchname(string fname) override;
    void Choicework() override;
};


#endif // BASEEMPLOYEE_H
