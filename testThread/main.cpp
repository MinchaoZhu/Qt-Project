#include "testthread.h"
#include <QApplication>
#include "mythread.h"

int main(int argc, char *argv[])
{
    int tSize = 30;
    QApplication a(argc, argv);
    myThread th[tSize];
    for(int i=0;i<tSize;++i){
        th[i].start();
    }

    return a.exec();
}
