#ifndef NORMAL_EMPLOYEE_H
#define NORMAL_EMPLOYEE_H
#pragma once
#include <base_employee.h>

class normal_employee : public BaseEmployee
{   int progress;
public:
    normal_employee(string name, char timeType);
    void getRealtime() override;
    int CalWorkTime() override;
    void massegeIn() override;
    void massegeOut() override;
    int Searchname(string fname) override;
    void Choicework() override;
    void Working() override;
    void Pay() override;
};

#endif // NORMAL_EMPLOYEE_H
