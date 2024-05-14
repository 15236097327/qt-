#include "Widget.h"

#include <QApplication>
/*
 信号和槽，是QT框架引以为豪的东西，实际上就是，观察者模式
使用connect函数 可以为信号和槽建立好链接，当信号触发时，槽做出相应的反应
信号:函数声明，无需实现 系统大多数类，都内置了信号 开发者也可以自定义信号

 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
