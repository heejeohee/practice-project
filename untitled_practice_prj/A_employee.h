#ifndef ATYPEEMPLOYEE_H
#define ATYPEEMPLOYEE_H
#pragma once
#include <base_employee.h>

class AtypeEmployee : public BaseEmployee
{
    double progress=0;
public:
    AtypeEmployee(string name, char timeType);
    void getRealtime() override;
    int CalWorkTime() override;
    void massegeIn() override;
    void massegeOut() override;
    int Searchname(string fname) override;
    void Choicework() override;
    void Working() override;
    void Pay() override;
};

#endif // ATYPEEMPLOYEE_H
