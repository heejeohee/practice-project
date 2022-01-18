#ifndef BASEEMPLOYEE_H
#define BASEEMPLOYEE_H
#pragma once
#include <employee.h>

class BaseEmployee:public employee
{
protected:
    int Rank, worklevel;
    int realIn, realOut;
    string Name;
    char Type;
public:
    BaseEmployee(string N, char T, int R);
    void showName();
    void showtype();
    void showrank();
    void showwork();
    void getRealtime() override;
    int CalWorkTime();
    void massegeOut() override;
    void massegeIn() override;
    int Searchname(string fname) override;
    void Choicework() override;
    void Working() override;
    void Pay() override;
};


#endif // BASEEMPLOYEE_H
