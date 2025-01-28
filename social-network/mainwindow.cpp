#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "showmessages.h"

MainWindow::MainWindow(std::string uname , QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Graph* graph = new Graph;
    DataBase::pushGraph(graph);
    users user;
    DataBase::setUserFromDB(&user , uname);
    ui->age->setNum( user.getage());
    ui->name->setText(QString::fromStdString(user.getName()));
    ui->gmail->setText(QString::fromStdString(user.getgmail()));
    ui->uname->setText(QString::fromStdString(uname));

}

MainWindow::~MainWindow()
{
    delete ui;
}

