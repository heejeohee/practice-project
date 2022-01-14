#ifndef BTYPEEMPLOYEE_H
#define BTYPEEMPLOYEE_H
#pragma once
#include <employee.h>

class BtypeEmployee : public employee
{
    int realIn, realOut;
public:
    BtypeEmployee(string name);
    void showNametype() override;
    void getRealtime() override;
    int CalWorkTime() override;
    void massegeIn() override;
    void massegeOut() override;
};

#endif // BTYPEEMPLOYEE_H
