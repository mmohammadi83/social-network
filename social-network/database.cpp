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
    query.bindValue(":userName" , QString::fromStdString(Uname).trimmed());

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
        graph->addEdge(to , from);
    }
    qDebug() << "graph pushed";
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

    user->setUName(query.value(1).toString().toStdString());
    user->setPass(query.value(2).toString().toStdString());
    user->setName(query.value(3).toString().toStdString());
    user->setage(query.value(4).toInt());
    user->setgmail(query.value(5).toString().toStdString());
    qDebug() << "done set user from databace";

    db.close();
    return 1;
}

void DataBase::addProfile(string uname, string path)
{
    if(path == ""){
        qDebug() << "path is empty";
        return ;
    }
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("data.db");

    if(!db.open()){
        qDebug() << "faild to open database";
        return ;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO profiles(userName , path)"
                  "VALUES (:uname , :path)"
                  "ON CONFLICT (userName) DO UPDATE SET path = :path");
    query.bindValue(":uname", QString::fromStdString(uname).trimmed());
    query.bindValue(":path", QString::fromStdString(path).trimmed());

    if(!query.exec()){
        qDebug() << "faild to execute";
        db.close();
        return ;
    }
    qDebug() << "profile and user added successfuli";
    db.close();
    return;

}

void DataBase::updateUser(string uname , string name, string pass, int age, string gmail)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("data.db");

    if(!db.open()){
        qDebug() << "faild to open database";
        return ;
    }

    QSqlQuery query;
    query.prepare("UPDATE user SET name = :name , age = :age , gmail = :gmail , password = :pass "
                  "WHERE userName = :uname");
    query.bindValue(":name", QString::fromStdString(name).trimmed());
    query.bindValue(":age", age);
    query.bindValue(":gmail", QString::fromStdString(gmail).trimmed());
    query.bindValue(":pass", QString::fromStdString(pass).trimmed());
    query.bindValue(":uname", QString::fromStdString(uname).trimmed());

    if(!query.exec()){
        qDebug() << "faild to execute";
        db.close();
        return ;
    }
    qDebug() << "profile edited successfuli";
    db.close();
    return;
}

QString DataBase::setProfile(string uname)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("data.db");

    QString defualtPath = ":/new/prefix1/defualt.jpg";
    if(!db.open()){
        qDebug() << "faild to open database";
        return defualtPath;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM profiles WHERE userName = :uname");
    query.bindValue(":uname", QString::fromStdString(uname).trimmed());

    if(!query.exec()){
        qDebug() << "faild to execute";
        db.close();
        return defualtPath;
    }
    if(!query.next()){
        qDebug() << "profile image not exists";
        return defualtPath;
    }
    QString suffix = QFileInfo(query.value(1).toString()).suffix().toLower();
    QString destinationPath = "./profiles/"+QString::fromStdString(uname)+"."+suffix;
    qDebug() << "profile image loaded";
    db.close();
    return destinationPath;
}

int DataBase::countfollowers(string uname)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("data.db");

    if(!db.open()){
        qDebug() << "faild to open database";
        return 0;
    }

    QSqlQuery query;
    query.prepare("SELECT COUNT(*) AS followers FROM followList WHERE userName = :uname");
    query.bindValue(":uname", QString::fromStdString(uname).trimmed());

    if(!query.exec()){
        qDebug() << "faild to execute";
        db.close();
        return 0;
    }
    query.next();

    int result = query.value(0).toInt();

    db.close();
    return result;

}

int DataBase::countfollowing(string uname)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("data.db");

    if(!db.open()){
        qDebug() << "faild to open database";
        return 0;
    }

    QSqlQuery query;
    query.prepare("SELECT COUNT(*) AS followers FROM followList WHERE following = :uname");
    query.bindValue(":uname", QString::fromStdString(uname).trimmed());

    if(!query.exec()){
        qDebug() << "faild to execute";
        db.close();
        return 0;
    }
    query.next();

    int result = query.value(0).toInt();

    db.close();
    return result;

}

bool DataBase::isFollowing(string from, string to)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("data.db");

    if(!db.open()){
        qDebug() << "faild to open database";
        return 0;
    }

    QSqlQuery query;
    query.prepare("SELECT COUNT(*) AS follow FROM followList WHERE userName = :from AND following = :to");
    query.bindValue(":from", QString::fromStdString(from).trimmed());
    query.bindValue(":to", QString::fromStdString(to).trimmed());

    if(!query.exec()){
        qDebug() << "faild to execute";
        db.close();
        return 0;
    }
    query.next();

    int result = query.value(0).toInt();

    db.close();
    return result;
}

void DataBase::follow(string from, string to)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("data.db");

    if(!db.open()){
        qDebug() << "faild to open database";
        return ;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO followList(userName , following) VALUES(:from , :to)");
    query.bindValue(":from", QString::fromStdString(from).trimmed());
    query.bindValue(":to", QString::fromStdString(to).trimmed());

    if(!query.exec()){
        qDebug() << "faild to execute";
        db.close();
        return ;
    }

    qDebug() << "following done";
    db.close();

}

void DataBase::unfollow(string from, string to)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("data.db");

    if(!db.open()){
        qDebug() << "faild to open database";
        return ;
    }

    QSqlQuery query;
    query.prepare("DELETE FROM followList WHERE userName = :from AND following = :to");
    query.bindValue(":from", QString::fromStdString(from).trimmed());
    query.bindValue(":to", QString::fromStdString(to).trimmed());

    if(!query.exec()){
        qDebug() << "faild to execute";
        db.close();
        return ;
    }

    qDebug() << "unfollowing done";
    db.close();

}

vector<string> DataBase::getAllUsers()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("data.db");
    vector<string> listUsers;
    if(!db.open()){
        qDebug() << "faild to open database";
        return listUsers;
    }

    QSqlQuery query;
    query.prepare("SELECT name FROM user ORDER BY userID DESC;");

    if(!query.exec()){
        qDebug() << "faild to execute";
        db.close();
        return listUsers;
    }
    while(query.next()){
        listUsers.push_back(query.value(0).toString().toStdString());
    }
    db.close();
    return listUsers;
}







