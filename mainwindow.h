#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QTimer"
#include"QLabel"
#include"QPaintEvent"
#include <opencv2/opencv.hpp>
#include <opencv/cvaux.h>
#include <opencv/cxcore.h>
#include <opencv/cxmisc.h>
#include <opencv/highgui.h>
//#include <opencv/ml.h>
#include "ui_mainwindow.h"
#include"QGraphicsObject"
using namespace cv;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
     int eyedetection();
     void detectAndDisplay( Mat frame );
    ~MainWindow();
public slots:
    void updateImage();
   void animation();


private:
    QTimer theTimer;
    Mat srcImage;
    Mat srcImage1;
    VideoCapture videoCap;
    QLabel *imageLabel;
    CascadeClassifier face_cascade;
    CascadeClassifier eyes_cascade;
    CvCapture* capture;
    Mat frame;
    QLabel *cap;
    QPoint begin;

    QPoint myArray[5000];

    //Ui::MainWindow ui;
   // Ui::MainWindowClass ui;

protected:
   void paintEvent(QPaintEvent *e);
};
//


#endif // MAINWINDOW_H
