#include "mainwindow.h"
#include <QApplication>
#include <qpushbutton.h>
#include <qfont.h>

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
    QPushButton quit("Quit", 0);
    quit.resize(75, 30);
    quit.setFont(QFont("Times", 18, QFont::Bold));

    QObject::connect(&quit, SIGNAL(clicked()), &a, SLOT(quit()) );

    quit.show();
    */


    return a.exec();
}
