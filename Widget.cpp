#include "Widget.h"
#include<QPushButton>
#include<QDebug>
#include<QApplication>
#include <QIcon>
#include <QPixmap>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    // auto btn=new QPushButton("最大化",this);
    // //first
    // connect(btn,&QPushButton::clicked,this,&QWidget::showMaximized);
    // auto btnmin=new QPushButton("最小化",this);
    // btnmin->move(100,200);
    // connect(btnmin,&QPushButton::clicked,this,&QWidget::showMinimized);
    // auto btnnor=new QPushButton("正常",this);
    // btnnor->move(200,100);
    // connect(btnnor,&QPushButton::clicked,this,&QWidget::showNormal);
    auto btn1=new QPushButton("啊哈",this);
    btn1->setFixedSize(600,400);
    QIcon hiticon("://Snipaste_2024-03-13_00-13-26.png");
    QIcon fighticon("://Snipaste_2024-03-13_00-14-02.png");
    btn1->move(100,100);
    connect(btn1,&QPushButton::pressed,[=](){
        qDebug()<<"被打了";
        btn1->setIcon(hiticon);
        btn1->setIconSize(btn1->size());
    });
    connect(btn1,&QPushButton::released,[=](){
        qDebug()<<"反抗了";
        btn1->setIcon(fighticon);
        btn1->setIconSize(btn1->size());
    });
    btn1->show();
    int num=100;
    //void(*pFun)();
    auto pFun= [&]()->void
    {
        num=300;
        qDebug()<<"我被打了！！";
        qDebug()<<num;
    };
    pFun();
}

Widget::~Widget() {}
