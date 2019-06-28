#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <vector>
#include <func.h>
using namespace std;

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

public slots:
    void ascClick();
    void clearClick();
    void decClick();

private:
    Ui::Widget *ui;
    vector<int> str2int(QString);
    void errorFunc();

};

#endif // WIDGET_H
