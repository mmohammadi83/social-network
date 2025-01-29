#ifndef DATABASE_H
#define DATABASE_H
#include "users.h"
#include "graph.h"
#include <QString>
#include <QFileInfo>
#include <QPainter>
#include <QPainterPath>
#include <QFile>
#include <QPixmap>
#include <QIcon>
#include <QDebug>
#include <vector>

class DataBase
{
public:
    DataBase();

    static void addUser(users& user);
    static bool userExists(std::string Uname);
    static int validationUser(std::string Uname , std::string pass);
    static void pushGraph(Graph* graph);
    static bool setUserFromDB(users* user , std::string uname);
    static void addProfile(std::string uname , std::string path);
    static void updateUser(std::string uname ,std::string name , std::string pass , int age , std::string gmail);
    static QString setProfile(string uname);
    static int countfollowers(std::string uname);
    static int countfollowing(std::string uname);
    static bool isFollowing(string from , string to);
    static void follow(string from , string to);
    static void unfollow(string from , string to);
    static vector<std::string> getAllUsers();
};

#endif // DATABASE_H
