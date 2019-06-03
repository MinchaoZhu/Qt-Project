/********************************************************************************
** Form generated from reading UI file 'prime.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIME_H
#define UI_PRIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_prime
{
public:
    QLineEdit *inputNum;
    QTextBrowser *display;
    QPushButton *confirmButton;
    QLabel *label;

    void setupUi(QWidget *prime)
    {
        if (prime->objectName().isEmpty())
            prime->setObjectName(QStringLiteral("prime"));
        prime->resize(800, 600);
        inputNum = new QLineEdit(prime);
        inputNum->setObjectName(QStringLiteral("inputNum"));
        inputNum->setGeometry(QRect(500, 100, 240, 46));
        QFont font;
        font.setPointSize(24);
        inputNum->setFont(font);
        display = new QTextBrowser(prime);
        display->setObjectName(QStringLiteral("display"));
        display->setGeometry(QRect(18, 18, 420, 540));
        confirmButton = new QPushButton(prime);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));
        confirmButton->setGeometry(QRect(500, 260, 240, 240));
        QFont font1;
        font1.setPointSize(56);
        confirmButton->setFont(font1);
        label = new QLabel(prime);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(570, 20, 160, 60));
        QFont font2;
        font2.setPointSize(18);
        label->setFont(font2);

        retranslateUi(prime);
        QObject::connect(confirmButton, SIGNAL(clicked()), prime, SLOT(confirmClicked()));

        QMetaObject::connectSlotsByName(prime);
    } // setupUi

    void retranslateUi(QWidget *prime)
    {
        prime->setWindowTitle(QApplication::translate("prime", "prime", nullptr));
        inputNum->setText(QString());
        display->setHtml(QApplication::translate("prime", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#9f4556;\">\350\257\267\350\276\223\345\205\245\351\234\200\350\246\201\345\210\244\346\226\255\347\232\204\346\255\243\346\225\264\346\225\260:</span></p></body></html>", nullptr));
        confirmButton->setText(QApplication::translate("prime", "\347\241\256\345\256\232", nullptr));
        label->setText(QApplication::translate("prime", "\350\264\250\346\225\260\345\210\244\346\226\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class prime: public Ui_prime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIME_H
