#ifndef CTYPEEMPLOYEE_H
#define CTYPEEMPLOYEE_H
#pragma once
#include <base_employee.h>

class CtypeEmployee : public BaseEmployee
{
public:
    CtypeEmployee(string name, char timeType);
    void getRealtime() override;
    int CalWorkTime() override;
    void messageIn() override;
    void messageOut() override;
    int Searchname(string fname) override;
    void Choicework() override;
    void Working() override;
    void Pay() override;
};

#endif // CTYPEEMPLOYEE_H
