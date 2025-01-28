#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "showmessages.h"
#include "editprofile.h"

MainWindow::MainWindow(std::string uname , QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->uname = uname;
    graph = new Graph;
    DataBase::pushGraph(graph);
    users user;
    DataBase::setUserFromDB(&user , uname);
    ui->name->setText(QString::fromStdString(user.getName()));
    ui->gmail->setText(QString::fromStdString(user.getgmail()));
    ui->uname->setText(QString::fromStdString(uname));
    ui->age->setNum( user.getage());


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    editprofile edit(uname);
    edit.exec();
}
