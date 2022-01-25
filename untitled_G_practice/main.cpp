/*
#include <iostream>
#include <vector>
#include <string>
#include <abstract.h>
*/
#include "g_practice.h"
#include <QApplication>
//#include <calculator.h>
#include <QWidget>
#include <QLayout>
#include <QPushButton>
#include <QTextEdit>
#include <QString>

using namespace std;

class NestedLayouts : public QWidget{
public:
    NestedLayouts();
};
NestedLayouts::NestedLayouts(){
    QPushButton *button1 =new QPushButton("New", this);
    QPushButton *button2=new QPushButton("Save", this);
    QPushButton *button3=new QPushButton("Quit", this);

    QTextEdit *editor = new QTextEdit(this);
    editor->setPlainText(QString::fromLocal8Bit("마진(Margin) : 레이아웃 내 위젯과 레이아웃의 바깥 외곽 간의 간격. 대부분 최상위 레이아웃에서만 지원하며, 간혹 QBoxLayout나 QGridLayout도 지원한다. 디폴트는 0"));
    QVBoxLayout *VBox = new QVBoxLayout();

    VBox->addWidget(button1);
    VBox->addWidget(button2);
    VBox->addStretch(1);
    VBox->addWidget(button3);

    QHBoxLayout *HBox=new QHBoxLayout(this);
    HBox->addWidget(editor);
    HBox->addSpacing(2);
    HBox->addLayout(VBox);

    QObject::connect(button3,SIGNAL(clicked()),this,SLOT(close())); //QWidget에서 종료는 close(), main의 app에서 종료는 quit
}
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    NestedLayouts *nestedLayouts = new NestedLayouts();
    nestedLayouts->show();
    //G_practice w;
    // w.show();
    return app.exec();
}
