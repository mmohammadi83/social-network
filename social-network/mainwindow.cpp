#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "showmessages.h"
MainWindow::MainWindow(std::string uname , QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::someFunction()
{
    showmessages *messagesWindow = new showmessages(this);
    messagesWindow->show();
}
