#include "mainwindow.h"
#include <QApplication>
#include"QDebug"
#include"QGridLayout"
#include"QLabel"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    //PaintedWidget view;
    //qDebug()<<"what's wrong?";
    QLabel *imageLabel = new QLabel(&w);
    //ui.verticalLayout->addWidget(imageLabel);
    QGridLayout*tlayout=new QGridLayout;
       tlayout->addWidget(imageLabel,2,2);
      // w.setLayout(tlayout);
       //QObject::connect(theTimer,&QTimer::timeout,&w,&MainWindow::animation);
      // w.animation();
       w.show();
       return a.exec();
}
