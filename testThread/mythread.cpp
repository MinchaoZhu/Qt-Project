#include "mythread.h"

myThread::myThread()
{

}

void myThread::run(){
    w->resize(100,100);
    w->show();
    w->crazyMove();
}

