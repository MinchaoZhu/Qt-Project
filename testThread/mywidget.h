#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

class myWidget : public QWidget
{
    Q_OBJECT
public:
    explicit myWidget(QWidget *parent = nullptr);
    void crazyMove();
private:
    int random(int);
signals:

public slots:
};

#endif // MYWIDGET_H
