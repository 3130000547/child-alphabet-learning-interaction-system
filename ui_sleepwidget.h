/********************************************************************************
** Form generated from reading UI file 'sleepwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLEEPWIDGET_H
#define UI_SLEEPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sleepWidget
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *sleepWidget)
    {
        if (sleepWidget->objectName().isEmpty())
            sleepWidget->setObjectName(QStringLiteral("sleepWidget"));
        sleepWidget->resize(400, 300);
        pushButton = new QPushButton(sleepWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(264, 232, 81, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label = new QLabel(sleepWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 311, 191));

        retranslateUi(sleepWidget);

        QMetaObject::connectSlotsByName(sleepWidget);
    } // setupUi

    void retranslateUi(QWidget *sleepWidget)
    {
        sleepWidget->setWindowTitle(QApplication::translate("sleepWidget", "Form", 0));
        pushButton->setText(QApplication::translate("sleepWidget", "\350\277\224\345\233\236\347\273\247\347\273\255\345\274\200\345\247\213", 0));
        label->setText(QApplication::translate("sleepWidget", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class sleepWidget: public Ui_sleepWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLEEPWIDGET_H
