#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QtDebug>
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
int MainWindow::test(QString str)
{
qDebug()<<"MainWindow::test(QString str)################";
return 100;
}
