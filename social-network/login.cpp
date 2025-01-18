#include "login.h"
#include "ui_login.h"
#include "database.h"
#include "users.h"
login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    ui->errorSignUp->hide();
    ui->errorLogIn->hide();
    ui->errorconfirm->hide();
    ui->doneSignUp->hide();
}

login::~login()
{
    delete ui;

}


void login::on_loginB_clicked()
{


}

void login::on_signupB_clicked()
{
    std::string uname = ui->userName->text().toStdString();
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
}
