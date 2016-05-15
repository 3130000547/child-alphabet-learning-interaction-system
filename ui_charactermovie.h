/********************************************************************************
** Form generated from reading UI file 'charactermovie.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARACTERMOVIE_H
#define UI_CHARACTERMOVIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_charactermovie
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *charactermovie)
    {
        if (charactermovie->objectName().isEmpty())
            charactermovie->setObjectName(QStringLiteral("charactermovie"));
        charactermovie->resize(446, 306);
        pushButton = new QPushButton(charactermovie);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 260, 75, 23));
        pushButton->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label = new QLabel(charactermovie);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 391, 241));

        retranslateUi(charactermovie);

        QMetaObject::connectSlotsByName(charactermovie);
    } // setupUi

    void retranslateUi(QWidget *charactermovie)
    {
        charactermovie->setWindowTitle(QApplication::translate("charactermovie", "Form", 0));
        pushButton->setText(QApplication::translate("charactermovie", "\350\277\224\345\233\236", 0));
        label->setText(QApplication::translate("charactermovie", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class charactermovie: public Ui_charactermovie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTERMOVIE_H
