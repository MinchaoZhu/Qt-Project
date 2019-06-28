/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTextBrowser *out;
    QPushButton *ascButton;
    QLineEdit *in;
    QPushButton *decButton;
    QPushButton *clearButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(775, 553);
        out = new QTextBrowser(Widget);
        out->setObjectName(QStringLiteral("out"));
        out->setGeometry(QRect(80, 40, 311, 251));
        ascButton = new QPushButton(Widget);
        ascButton->setObjectName(QStringLiteral("ascButton"));
        ascButton->setGeometry(QRect(490, 20, 231, 181));
        in = new QLineEdit(Widget);
        in->setObjectName(QStringLiteral("in"));
        in->setGeometry(QRect(80, 410, 311, 41));
        in->setDragEnabled(true);
        decButton = new QPushButton(Widget);
        decButton->setObjectName(QStringLiteral("decButton"));
        decButton->setGeometry(QRect(490, 200, 231, 171));
        clearButton = new QPushButton(Widget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setGeometry(QRect(490, 370, 231, 171));

        retranslateUi(Widget);
        QObject::connect(ascButton, SIGNAL(clicked()), Widget, SLOT(ascClick()));
        QObject::connect(decButton, SIGNAL(clicked()), Widget, SLOT(decClick()));
        QObject::connect(clearButton, SIGNAL(clicked()), Widget, SLOT(clearClick()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        ascButton->setText(QApplication::translate("Widget", "Sort Ascending", nullptr));
        decButton->setText(QApplication::translate("Widget", "Sort Decending", nullptr));
        clearButton->setText(QApplication::translate("Widget", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
