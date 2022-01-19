#ifndef ALLEMPLOYEE_H
#define ALLEMPLOYEE_H
#pragma once
#include <base_employee.h>

class AtypeEmployee : public BaseEmployee
{
public:
    AtypeEmployee(string name, char timeType);

    void Working() override;
    void Pay() override;
};

class BtypeEmployee : public BaseEmployee
{
public:
    BtypeEmployee(string name, char timeType);

    void Working() override;
    void Pay() override;
};

class CtypeEmployee : public BaseEmployee
{
public:
    CtypeEmployee(string name, char timeType);

    void Working() override;
    void Pay() override;
};

class normal_employee : public BaseEmployee
{
public:
    normal_employee(string name, char timeType);

    void Working() override;
    void Pay() override;
};

#endif // ALLEMPLOYEE_H

