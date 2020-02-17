#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QFont>
#include <QPushButton>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
 /*   ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
*/
{
    setFixedSize(400,200);

    QPushButton *quit = new QPushButton(tr("Quit"), this);
    quit-> setGeometry(62, 40, 75, 30);
    quit-> setFont(QFont("Times", 18,QFont::Bold));
    connect(quit, SIGNAL(clicked()), qApp, SLOT(quit()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


