#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>
#include "mywidget.h"
class myThread : public QThread
{
public:
    myThread();
    myWidget *w = new myWidget;
protected:
    void run();


};

#endif // MYTHREAD_H
