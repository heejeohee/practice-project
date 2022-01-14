#include "hello.h"
#include <QApplication>
#include <QtCore/QCoreApplication>
#include <iostream>
#include<QStringList>
#include<QDebug>
using namespace std;
QStringList QString_filter(const QStringList *that, const QString &str){

    QStringList res, tmp ,blank;
    QString one;
    int size, len, space=0;

    for(int i=0;i<that->size();i++){              //all list
        one =that->at(i);
        for(int j=0;j<str.length();j++){        //search
            if(i==0){
                if(one.at(j)==str.at(j)) res << that->at(i);
            }
            if(one.at(j)==" " && one.at(j+1)==str.at(j)) res << that->at(i);
            if(one.at(j)!=" " && one.at(j)==str.at(j)) res << that->at(i);
        }
    }


    /*for (int j = 0; j < str.length() ; j++){ //search name 4
        if(j==0) size=that->size();
       else size = res.size();

        for(int i = 0 ; i < size; i++){  //search list
            if(str.at(j)==" "){
                if(j+1==str.length()) continue;
                space++;
                 break;}
            if(i==0){
            tmp =res;
            res = blank;

            }

            if(j==0) {one = that->at(i);   // pick one in list

            if(one.at(j)==" " && one.at(j+1)==str.at(j)) res << that->at(i);  //case1
            if(one.at(j)!=" " && one.at(j)==str.at(j)) res << that->at(i);  //case2

            }

           else{
                one = tmp.at(i);
                if(one.at(j-space)==" "&& one.at(j-space+1)==str.at(j)) res << tmp.at(i);  //case[4]
                else if((one.at(j-space)!=" ")&&one.at(j-space)==str.at(j)) res << tmp.at(i);  //case[3]
                else if((one.at(j-space-1)==" ")&& one.at(j-space+1)==str.at(j)) res << tmp.at(i);   // case[2]
                else if((one.at(j-space-1)==" ")&& one.at(j-space+1)==" " && one.at(j-space+2)==str.at(j)) res << tmp.at(i); //case[1]

            }

            }

      if(j>=str.length()-1){
           tmp =res;
           size = tmp.size();
           res = blank;

          for(int i = 0 ; i < size; i++){
                   one = tmp.at(i);
                   len=tmp.at(i).length();

                   if(one.at(j-space)==" " && one.at(j-space+1)==str.at(j)){
                        if((len > j+1 && one.at(j-space+2)==" ")||len<=j+1)
                       res << tmp.at(i); } //case[4]
                   else if((one.at(j-space)!=" ")&&one.at(j-space)==str.at(j)){
                       if((len > j && one.at(j-space+1)==" ")||len<=j)
                      res << tmp.at(i); } //case[3]
                   else if((one.at(j-space-1)==" ")&& one.at(j-space+1)==str.at(j)){
                        if((len > j + 1 && one.at(j-space+2)==" ")||len<=j+1)
                      res << tmp.at(i);}     //case[2]
                   else if((one.at(j-space-1)==" ")&& one.at(j-space+1)==" " && one.at(j-space+2)==str.at(j)){
                        if((len > j+2 && one.at(j-space+3)==" ")||len<=j+2)
                       res << tmp.at(i);}        //case[1]
               }
      }
    }
    //qDebug() << "temp " << tmp << "\n total :" << tmp.size();
   // qDebug() << "result " << res << "\n total :" << res.size();*/
        return res;
}
/*class cl {
    int id;
public:
    int i;
    cl(int i);
    ~cl();
    void neg(cl &o) {o.i=-o.i;}  //reference memberfunction
};*/
/*class balance{
  double cur_bal;
  char name[80];
public:
  balance (double n, char *s){
      cur_bal=n;
      strcpy(name,s);
  }
  balance(){}
  ~balance(){
      cout<<"Destructing "<< name <<endl;
  }
  void set_bal(double n, char *s){
      cur_bal = n;
      strcpy(name,s);
  }
  void get_bal(double &n, char*s){
      n=cur_bal;
      strcpy(s,name);
  }
};*/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    qDebug()<<"input : ";
    QString recogName = "홍 길동";
    QString sample =" 홍 길";
    QStringList phonebookList;


    phonebookList << "홍 길 동";
    phonebookList << "홍길 동";
    phonebookList << "홍 길동";
    phonebookList << "홍길동";
    phonebookList << "나는 홍길동 이다.";
    phonebookList << "홍길동 형";
    phonebookList << "홍길동누나";
    phonebookList << "홍길동 아버지";
    phonebookList << "홍길동친구";
    phonebookList << "미디어젠 홍길동 연구원";
    phonebookList << "홍길동 미디어젠 연구원";
    //**plus**//
    phonebookList << "홍길동 이다.";
    phonebookList << "홍 길동 형";
    phonebookList << "홍길 동 누나";
    phonebookList << "홍 길 동 아버지";

    qDebug()<<sample;

   qDebug() << "result :" << QString_filter(&phonebookList, sample.trimmed());
    //qDebug()<< result;

    //hello w;
    //w.show();

    return a.exec();
}
