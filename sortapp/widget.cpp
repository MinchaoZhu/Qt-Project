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

void Widget::ascClick(){
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
    funcCall.sort(vec,ASC);
    ui->out->append("The ascending sort result is \n");
    for(int i = 0;i<vec.size();++i){
        ui->out->insertPlainText(QString::number(vec[i],10)+" ");
    }
}
void Widget::clearClick(){
    ui->out->clear();
}
void Widget::decClick(){
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
    funcCall.sort(vec,DEC);
    ui->out->append("The decending sort result is \n");
    for(int i = 0;i<vec.size();++i){
        ui->out->insertPlainText(QString::number(vec[i],10)+" ");
    }
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



















