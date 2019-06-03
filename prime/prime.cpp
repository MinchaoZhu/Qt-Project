#include "prime.h"
#include "ui_prime.h"

prime::prime(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::prime)
{
    ui->setupUi(this);
}

prime::~prime()
{
    delete ui;
}

void prime::confirmClicked(){
    int num;
    //ui->display->clear();
    num = ui->inputNum->text().toInt();
    if(num<=0){
        ui->display->append("请输入1~2147483647之间的正整数");
    }
    else if(isPrime(num)){
        ui->display->append(ui->inputNum->text()+"是质数");
    }
    else{
        ui->display->append(ui->inputNum->text()+"不是质数");
    }
}
