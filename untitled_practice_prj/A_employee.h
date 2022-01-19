#ifndef ATYPEEMPLOYEE_H
#define ATYPEEMPLOYEE_H
#pragma once
#include <base_employee.h>

class AtypeEmployee : public BaseEmployee
{
public:
    AtypeEmployee(string name, char timeType);
    void getRealtime() override;
    int CalWorkTime() override;
    void messageIn() override;
    void messageOut() override;
    int Searchname(string fname) override;
    void Choicework() override;
    void Working() override;
    void Pay() override;
};

#endif // ATYPEEMPLOYEE_H
