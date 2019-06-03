#include "mywidget.h"
#include <QThread>
#include <stdlib.h>

myWidget::myWidget(QWidget *parent) : QWidget(parent)
{

}

int myWidget::random(int x){
    return (16807*x)%2147483647;
}

void myWidget::crazyMove(){
    //this->show();
    int vx,vy,x,y;
    vx = 1+(this->x())+2*rand()%20;
    vy = 1+(this->y())+2*rand()%20;
    while(1){
        x = this->x();
        y = this->y();
        if(x+this->width()>=1920)vx=-abs(vx);
        if(x<=0)vx=abs(vx);
        if(y+this->height()>=1080)vy=-abs(vy);
        if(y<=0)vy=abs(vy);
        this->move(x+vx,y+vy);
        QThread::msleep(20);
    }
}
