#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionQuitter,&QAction::triggered,this,&MainWindow::close); //bouton pour quitter la fenetre
}

MainWindow::~MainWindow()
{
    delete ui;
}

