#ifndef NORMAL_EMPLOYEE_H
#define NORMAL_EMPLOYEE_H
#pragma once
#include <base_employee.h>

class normal_employee : public BaseEmployee
{
public:
    normal_employee(string name, char timeType);
    void getRealtime() override;
    int CalWorkTime() override;
    void messageIn() override;
    void messageOut() override;
    int Searchname(string fname) override;
    void Choicework() override;
    void Working() override;
    void Pay() override;
};

#endif // NORMAL_EMPLOYEE_H
