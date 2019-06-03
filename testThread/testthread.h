#ifndef TESTTHREAD_H
#define TESTTHREAD_H

#include <QWidget>

namespace Ui {
class testThread;
}

class testThread : public QWidget
{
    Q_OBJECT

public:
    explicit testThread(QWidget *parent = 0);
    ~testThread();

private:
    Ui::testThread *ui;
};

#endif // TESTTHREAD_H
