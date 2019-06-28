#include "widget.h"
#include "ui_widget.h"
#include <vector>

func funcCall;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::minClick(){
    QString str = ui->in->text();
    int len = str.length();
    for(int i=0;i<len;++i){
        if(!(str[i]=='+'||str[i]=='-'||str[i]==' '||(str[i]>='0'&&str[i]<='9'))){
            errorFunc();
            return;
        }
    }
    vector<int> vec = str2int(str);
    if(vec.size()==0){
        errorFunc();
        return;
    }
    int min = funcCall.min(vec);
    ui->out->append("The min number is "+ QString::number(min,10));
}
void Widget::clearClick(){
    ui->out->clear();
}
void Widget::maxClick(){
    QString str = ui->in->text();
    int len = str.length();
    for(int i=0;i<len;++i){
        if(!(str[i]=='+'||str[i]=='-'||str[i]==' '||(str[i]>='0'&&str[i]<='9'))){
            errorFunc();
            return;
        }
    }
    vector<int> vec = str2int(str);
    if(vec.size()==0){
        errorFunc();
        return;
    }
    int max = funcCall.max(vec);
    ui->out->append("The max number is "+ QString::number(max,10));
}

vector<int> Widget::str2int(QString str){
    vector<int> result;
    int cur = 0;
    int len = str.length();
    while(cur<len){
        int start=0,end=0,num;
        bool ok = 1;
        while(cur<len&&str[cur]==' ')++cur;
        start = cur;
        while(cur<len&&str[cur]!=' ')++cur;
        end = cur;
        num = str.mid(start,end-start).toInt(&ok,10);
        if(ok==false){
            result.clear();
            return result;
        }
        result.emplace_back(num);
    }
    return result;
}

void Widget::errorFunc(){
    ui->out->append("Please enter correct number list and seperate numbers with space");
}



















