#ifndef CTYPEEMPLOYEE_H
#define CTYPEEMPLOYEE_H
#pragma once
#include <employee.h>

class CtypeEmployee : public employee
{
        int realIn, realOut;
public:
    CtypeEmployee(string name);
    void showNametype() override;
    void getRealtime() override;
    int CalWorkTime() override;
    void massegeIn() override;
    void massegeOut() override;
};

#endif // CTYPEEMPLOYEE_H
