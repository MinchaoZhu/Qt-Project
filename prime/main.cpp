#include "prime.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    prime w;
    w.setWindowTitle("质数判断");
    w.show();
    return a.exec();
}
