#include "editpost.h"
#include "ui_editpost.h"

editPost::editPost(string uname , QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editPost)
{
    ui->setupUi(this);
    this->uname = uname;
    vector<QString> posts = DataBase::getPost(uname);
    if(posts.size() != 0){
        for(auto& i : posts){
            ui->listWidget->addItem(i);
        }
    }
}

editPost::~editPost()
{
    delete ui;
}

void editPost::on_ok_2_clicked()
{
    QString text = ui->lineEdit->text();
    DataBase::addPost(uname , text);
    ui->listWidget->addItem(text);
    ui->lineEdit->setText("");
}

void editPost::on_ok_clicked()
{
    this->close();
}
