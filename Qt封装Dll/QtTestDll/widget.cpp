#include "widget.h"
#include "ui_widget.h"
#include "testdll.h"
#include "mydll.h"

#pragma comment(lib,"testdll");
#pragma comment(lib,"mydll");

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    int a = 10;
    int b = 77;
    int c = Add(a,b);
    int d = Sub(a,b);
    printf("c: %d\n",c);
    printf("d: %d\n",d);
    test1();

}

Widget::~Widget()
{
    delete ui;
}
