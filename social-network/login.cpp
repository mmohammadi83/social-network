#include "login.h"
#include "ui_login.h"
#include "database.h"
#include "users.h"
#include "mainwindow.h"


login::login(std::string* uname , QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    this->uname = uname;
    ui->setupUi(this);
    ui->errorSignUp->hide();
    ui->errorLogIn->hide();
    ui->errorconfirm->hide();
    ui->doneSignUp->hide();
    ui->passIncorrect->hide();
    ui->errorServer->hide();

}

login::~login()
{
    delete ui;
}

void login::on_loginB_clicked()
{
    std::string uname = ui->unameLog->text().toStdString();
    if(uname == "") return;

    std::string pass = ui->passLog->text().toStdString();
    int validation = DataBase::validationUser(uname , pass);
    switch (validation) {
        case 0:
            ui->errorLogIn->hide();
            ui->passIncorrect->hide();
            ui->errorServer->show();
            break;
        case 1:
            ui->errorLogIn->hide();
            ui->passIncorrect->hide();
            ui->errorServer->show();
            break;
        case 2:
            ui->passIncorrect->hide();
            ui->errorServer->hide();
            ui->errorLogIn->show();
            break;
        case 3:

            ui->passIncorrect->hide();
            ui->errorServer->hide();
            ui->errorLogIn->hide();
            *this->uname = uname;
            this->close();
            break;
        case 4:
            ui->errorServer->hide();
            ui->errorLogIn->hide();
            ui->passIncorrect->show();
            break;
        default:
            break;
    }

}

void login::on_signupB_clicked()
{
    std::string uname = ui->userName->text().toStdString();
    if(uname == "") return;
    std::string name = ui->name->text().toStdString();
    std::string pass = ui->password->text().toStdString();
    std::string conpass = ui->confirmPass->text().toStdString();
    int age = ui->age->text().toInt();
    std::string gmail = ui->gmail->text().toStdString();

    if(pass != conpass){
        ui->errorconfirm->show();
        return;
    }
    ui->errorconfirm->hide();
    users u(uname , name , pass , age , gmail);
    if(DataBase::userExists(uname)){
        ui->errorSignUp->show();
        return;
    }
    ui->errorSignUp->hide();
    ui->doneSignUp->show();
    DataBase::addUser(u);
    ui->name->setText("");
    ui->userName->setText("");
    ui->password->setText("");
    ui->confirmPass->setText("");
    ui->age->setText("");
    ui->gmail->setText("");
}
