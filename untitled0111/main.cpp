#include "day0111.h"
#include <QApplication>
#include <QtCore/QCoreApplication>
#include <iostream>
#include<QDebug>
#include <new>
#include <cstdlib>
using namespace std;
/*class cl {
    int id;
public:
    int i;
    cl(int i);
    ~cl();
    void neg(cl &o) {o.i=-o.i;}  //reference memberfunction
};*/
int myfunc(int a){
    return a;
}
int myfunc(int a, int b){
    return a*b;
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int (*fp)(int a);
    fp = myfunc;

    cout<<fp(5);

    return 0;

    //hello w;
    //w.show();

    return a.exec();
}
