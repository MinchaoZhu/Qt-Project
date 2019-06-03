#include "testthread.h"
#include "ui_testthread.h"

testThread::testThread(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::testThread)
{
    ui->setupUi(this);
}

testThread::~testThread()
{
    delete ui;
}
