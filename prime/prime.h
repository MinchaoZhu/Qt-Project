#ifndef PRIME_H
#define PRIME_H

#include <QWidget>
#include <math.h>

namespace Ui {
class prime;
}

class prime : public QWidget
{
    Q_OBJECT

public:
    explicit prime(QWidget *parent = 0);
    ~prime();

private:
    Ui::prime *ui;
public slots:
    void confirmClicked();

private:
    int isPrime(int num){
        int i = sqrt(num);
        for(;i>1;--i){
            if(num%i==0)
                return 0;
        }
        return 1;
    }

};

#endif // PRIME_H
