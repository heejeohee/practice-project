#ifndef ATYPEEMPLOYEE_H
#define ATYPEEMPLOYEE_H
#pragma once
#include <employee.h>

class AtypeEmployee : public employee
{
    int realIn, realOut;
public:
    AtypeEmployee(string name);
    void showNametype() override;
    void getRealtime() override;
    int CalWorkTime() override;
    void massegeIn() override;
    void massegeOut() override;
};

#endif // ATYPEEMPLOYEE_H
