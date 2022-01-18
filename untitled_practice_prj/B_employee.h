#ifndef BTYPEEMPLOYEE_H
#define BTYPEEMPLOYEE_H
#pragma once
#include <base_employee.h>

class BtypeEmployee : public BaseEmployee
{
    double progress;
public:
    BtypeEmployee(string name, char timeType);
    void getRealtime() override;
    int CalWorkTime() override;
    void massegeIn() override;
    void massegeOut() override;
    int Searchname(string fname) override;
    void Choicework() override;
    void Working() override;
    void Pay() override;
};

#endif // BTYPEEMPLOYEE_H
