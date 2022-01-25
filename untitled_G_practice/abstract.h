#ifndef ABSTRACT_H
#define ABSTRACT_H
#include <iostream>
using namespace std;

class abstract
{
public:
    virtual ~abstract(){cout<<"abstract bye\n";}
    virtual void eat()=0;
    virtual void sleep()=0;
};

#endif // ABSTRACT_H
