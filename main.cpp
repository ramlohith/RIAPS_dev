#include "mainwindow.h"
#include <QApplication>
#include <QFont>
#include <QPushButton>
#include <QWidget>
#include "mywidget.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //default window presented when project created
    //Will work on embeddeding work onto window later!
   /* MainWindow w;
    w.show(); */

    /* Tutorial 1 - Hello World
     * QPushButton hello("Hello World!", 0);
     * hello.resize(100,30);
     * a.setMainWidget(&hello);
     * hello.show();
     * /

    /* Tutorial 2 - Quit button
    *   QPushButton quit("Quit", 0);
    *   quit.resize(75, 30);
    *   quit.setFont(QFont("Times", 18, QFont::Bold));
    *
    *   QObject::connect(&quit, SIGNAL(clicked()), &a, SLOT(quit()) );
    *
    *    quit.show();
    */

    /*Tutorial 3 - Quit widget as a child of window
    QWidget window;
    window.resize(500,120);

    QPushButton quit("Quit", &window);
    quit.setFont(QFont("Times", 18, QFont::Bold));
    quit.setGeometry(10,40,180,40);
    QObject::connect(&quit, SIGNAL(clicked()), &a, SLOT(quit()));

    window.show();
    */

    /* Tutorial 4 - Using other classes to create widgets
     * Added code to mainwindow.cpp for this purpose
    MainWindow w;
    w.show();
    */

    //Tutorial 5 - added slider to the widget.
    //Observe increase and decrease of numbers with movement of slider.
    MyWidget widget;
    widget.show();
    return a.exec();
}
