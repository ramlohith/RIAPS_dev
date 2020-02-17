#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/* MainWindow:: abc()
{
    QPushButton hello("Hello World!", 0);
    hello.resize(100,30);
    //a.setMainWidget(&hello);
    hello.show();
} */
