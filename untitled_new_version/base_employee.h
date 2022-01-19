#ifndef BASEEMPLOYEE_H
#define BASEEMPLOYEE_H
#pragma once
#include <employee.h>

class BaseEmployee:public employee
{
protected:
    int Rank, worklevel=0;
    int realIn, realOut;
    double progress=0.0;
    string Name;
    char Type;
public:
    BaseEmployee(string N, char T, int R);
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
    void Working();
    void Pay();
};


#endif // BASEEMPLOYEE_H
