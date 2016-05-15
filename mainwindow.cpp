#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QLabel"
#include"QPoint"
#include"QPainter"
#include"QImage"
#include"QDebug"
#include"QPropertyAnimation"
#include"QGraphicsObject"

int k=1;
int p=1;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)

{
    if(videoCap.open(0))
    {
        srcImage=Mat::zeros(videoCap.get(CV_CAP_PROP_FRAME_HEIGHT),videoCap.get(CV_CAP_PROP_FRAME_WIDTH),CV_8UC3);//BLANK
        theTimer.start(33);
   }
        imageLabel=new QLabel(this);
    //ui.setupUi(this);

//about cascade
String face_cascade_name = "C:\\Users\\SONY\\Documents\\untitled6\\haarcascade_frontalface_alt.xml";
String eyes_cascade_name = "C:\\Users\\SONY\\Documents\\untitled6\\haarcascade_eye_tree_eyeglasses.xml";




 //-- 1. Load the cascades
    if( !face_cascade.load( face_cascade_name ) ){ printf("--(!)Error loading\n");  };
    //if( !eyes_cascade.load( eyes_cascade_name ) ){ printf("--(!)Error loading\n");  };
    qDebug()<<"load really success";
    connect(&theTimer,&QTimer::timeout,this,&MainWindow::updateImage);

//load picture

    //QLabel cap;
    //cap.setGeometry(0,0,30,30 );
    cap = new QLabel(this);
    QImage*img=new QImage;
    QImage*imgScaled=new QImage;
        img->load("C:\\Users\\SONY\\Documents\\untitled6\\A.jpg");
        *imgScaled=img->scaled(30,30,Qt::KeepAspectRatio);
         cap->setPixmap(QPixmap::fromImage(*imgScaled));
         cap->setFixedSize(30,30);
         cap->show();

         //begin.setX(60);
        // begin.setY(60);
       //  cap->move(begin);
         //QPropertyAnimation *anim = new QPropertyAnimation(cap,"pos");
        // myArray[0].setX(0);
        //myArray[0].setY(0);
        // connect(&theTimer,&QTimer::timeout,this,&MainWindow::animation);


}
//-- 3. Apply the classifier to the frame
void MainWindow::paintEvent(QPaintEvent *e)
{
    //显示方法一
  QPainter painter(this);


         //cvtColor(srcImage,srcImage,CV_BGR2RGB);
      QImage image1 = QImage((uchar*)(srcImage.data), srcImage.cols, srcImage.rows, QImage::Format_RGB888);
      painter.drawImage(QPoint(40,40), image1);}

 /** @function detectAndDisplay */

    //-- Show what you got
   // imshow( window_name, frame );

MainWindow::~MainWindow()
{
    //delete ui;
}
void MainWindow::updateImage()
{//cvtColor(srcImage,srcImage,CV_BGR2GRAY);
   videoCap>>srcImage;
   // srcImage=cvResize();
    if(srcImage.data){
        detectAndDisplay( srcImage );
        //animation();


        cvtColor(srcImage,srcImage,CV_BGR2RGB);
        this->update();
    }
    else
    { qDebug()<<" --(!) No captured frame -- Break!";
        }

   /* int c = waitKey(10);
    if( (char)c == 'c' ) { break; }*/
    //if (1){
        //cap->move(begin);
   // }

}

void MainWindow::detectAndDisplay( Mat frame )
{

std::vector<Rect> faces;
Mat frame_gray;


cvtColor( frame, frame_gray, CV_BGR2GRAY );
equalizeHist( frame_gray, frame_gray );

//-- Detect faces
face_cascade.detectMultiScale( frame_gray, faces, 1.1, 2, 0|CV_HAAR_SCALE_IMAGE, Size(30, 30) );

for( size_t i = 0; i < faces.size(); i++ )
{
Point center( faces[i].x + faces[i].width*0.5, faces[i].y + faces[i].height*0.5 );
ellipse( frame, center, Size( faces[i].width*0.5, faces[i].height*0.5), 0, 0, 360, Scalar( 255, 0, 255 ), 4, 8, 0 );
if(center.x!=0){
    k=k+1;

myArray[k].setX(center.x);
myArray[k].setY(center.y);
// cap->move(myArray[k]);
animation();
}




}


}
void MainWindow::animation()

{ QPropertyAnimation *anim = new QPropertyAnimation(cap,"pos");
    //animationPos = 0;


         anim->setStartValue(myArray[p-1]);
 // anim->setStartValue(QRect(1000,0,12,100));
 //  anim->setEndValue(QRect(1000,10,12,100));
       anim->setDuration(33);
        anim->setEndValue(myArray[p]);
         p=p+1;
qDebug()<<"start from:"<<myArray[p-2]<<"to"<<myArray[p-1];
        // cap->move(myArray[k-1]);
anim->start();
            // anim->start();
}

