/********************************************************************************
** Form generated from reading UI file 'readaterme.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READATERME_H
#define UI_READATERME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReadAterMe
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *ReadAterMe)
    {
        if (ReadAterMe->objectName().isEmpty())
            ReadAterMe->setObjectName(QStringLiteral("ReadAterMe"));
        ReadAterMe->resize(400, 300);
        pushButton = new QPushButton(ReadAterMe);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 61, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_2 = new QPushButton(ReadAterMe);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 20, 61, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_3 = new QPushButton(ReadAterMe);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(210, 20, 61, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_4 = new QPushButton(ReadAterMe);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(300, 20, 61, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_5 = new QPushButton(ReadAterMe);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(310, 252, 51, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        graphicsView = new QGraphicsView(ReadAterMe);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(80, 70, 231, 171));

        retranslateUi(ReadAterMe);

        QMetaObject::connectSlotsByName(ReadAterMe);
    } // setupUi

    void retranslateUi(QWidget *ReadAterMe)
    {
        ReadAterMe->setWindowTitle(QApplication::translate("ReadAterMe", "Form", 0));
        pushButton->setText(QApplication::translate("ReadAterMe", "\346\255\243\345\272\217", 0));
        pushButton_2->setText(QApplication::translate("ReadAterMe", "\351\200\206\345\272\217", 0));
        pushButton_3->setText(QApplication::translate("ReadAterMe", "\344\271\261\345\272\217", 0));
        pushButton_4->setText(QApplication::translate("ReadAterMe", "\350\277\224\345\233\236", 0));
        pushButton_5->setText(QApplication::translate("ReadAterMe", "\344\274\221\346\201\257", 0));
    } // retranslateUi

};

namespace Ui {
    class ReadAterMe: public Ui_ReadAterMe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READATERME_H
