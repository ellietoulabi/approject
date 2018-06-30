#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QVBoxLayout *l=new QVBoxLayout;

    for(int i=0;i<20;i++)
    {
        QPushButton* x;
        x=new QPushButton;
        x->setStyleSheet("background-color:white; padding: 20px; border-color: black;");
        l->addWidget(x);

    }
  QWidget *w=new QWidget;
    w->setLayout(l);
    ui->scrollArea->setWidget(w);

}

MainWindow::~MainWindow()
{
    delete ui;
}
