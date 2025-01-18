#include "database.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>
#include <QDebug>
DataBase::DataBase()
{

}

void DataBase::addUser(users &user)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("data.db");

    if(!db.open()){
        qDebug() << "faild to open database";
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO user (userName , password , name , age , gmail) "
                  "VALUES ( :Uname , :pass , :name , :age , :gmail )");
    query.bindValue(":Uname", QString::fromStdString(user.getUName()));
    query.bindValue(":pass", QString::fromStdString(user.getPass()));
    query.bindValue(":name", QString::fromStdString(user.getName()));
    query.bindValue(":age", user.getage());
    query.bindValue(":gmail", QString::fromStdString(user.getgmail()));

    if(!query.exec()){
        qDebug() << "faild to execute";
        return;
    }

    qDebug() << "user add to table";
    db.close();
}

bool DataBase::userExists(std::string Uname)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("data.db");

    if(!db.open()){
        qDebug() << "faild to open database";
        return 1;
    }

    QSqlQuery query;
    query.prepare("SELECT EXISTS (SELECT * FROM user WHERE userName = :Uname)");
    query.bindValue(":Uname" , QString::fromStdString(Uname));

    if(!query.exec()){
        qDebug() << "faild to execute";
        return 1;
    }

    query.next();
    bool exist = query.value(0).toBool();

    db.close();

    if(exist)
        return true;
    else
        return false;



}

int DataBase::validationUser(std::string Uname, std::string pass)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("data.db");

    if(!db.open()){
        qDebug() << "faild to open database";
        return 0;
    }

    QSqlQuery query;
    query.prepare("SELECT password FROM user WHERE userName = :Uname;");
    query.bindValue(":Uname" , QString::fromStdString(Uname));

    if(!query.exec()){
        qDebug() << "faild to execute";
        return 1;
    }
    if(!query.next()){
        qDebug() << "user not exists";
        return 2;
    }
    std::string password = query.value(0).toString().toStdString();
    if(password == pass){
        qDebug() << "user is valid";
        return 3;
    }else{
        qDebug() << "user is not valid";
        return 4;
    }
}





