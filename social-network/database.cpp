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
    query.bindValue(":Uname", QString::fromStdString(user.getUName()).trimmed());
    query.bindValue(":pass", QString::fromStdString(user.getPass()).trimmed());
    query.bindValue(":name", QString::fromStdString(user.getName()).trimmed());
    query.bindValue(":age", user.getage());
    query.bindValue(":gmail", QString::fromStdString(user.getgmail()).trimmed());

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
    query.bindValue(":Uname" , QString::fromStdString(Uname).trimmed());

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
    query.prepare("SELECT password FROM user WHERE userName = :userName ");
    query.bindValue(":userName" , QString::fromStdString(Uname));

    if(!query.exec()){
        qDebug() << "faild to execute";
        db.close();
        return 1;
    }
    if(!query.next()){
        qDebug() << "user not exists";
        db.close();
        return 2;
    }

    std::string password = query.value(0).toString().toStdString();

    db.close();
    if(password == pass){
        qDebug() << "user is valid";
        return 3;
    }else{
        qDebug() << "user is not valid";
        return 4;
    }

}

void DataBase::pushGraph(Graph *graph)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("data.db");

    if(!db.open()){
        qDebug() << "faild to open database";
        return ;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM user");

    if(!query.exec()){
        qDebug() << "faild to execute";
        db.close();
        return ;
    }
    while(query.next()){
        std::string userName = query.value(1).toString().toStdString();
        std::string password = query.value(2).toString().toStdString();
        std::string name = query.value(3).toString().toStdString();
        int age = query.value(4).toInt();
        std::string gmail = query.value(5).toString().toStdString();

        graph->addNode(userName , password , name , age , gmail);
    }

    query.prepare("SELECT * FROM followList");

    if(!query.exec()){
        qDebug() << "faild to execute";
        db.close();
        return ;
    }

    while(query.next()){
        std::string from = query.value(0).toString().toStdString();
        std::string to = query.value(1).toString().toStdString();
        graph->addEdge(from , to);
    }
    db.close();
}

bool DataBase::setUserFromDB(users *user, string uname)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("data.db");

    if(!db.open()){
        qDebug() << "faild to open database";
        return 0;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM user WHERE userName = :uname ");
    query.bindValue(":uname" , QString::fromStdString(uname).trimmed());


    if(!query.exec()){
        qDebug() << "faild to execute";
        db.close();
        return 0;
    }

    if(!query.next()){
        qDebug() << "user not exists";
        db.close();
        return 0;
    }

    std::string userName = query.value(1).toString().toStdString();
    std::string password = query.value(2).toString().toStdString();
    std::string name = query.value(3).toString().toStdString();
    int age = query.value(4).toInt();
    std::string gmail = query.value(5).toString().toStdString();


    user = new users(userName , password , name , age , gmail);

    db.close();
    return 1;
}





