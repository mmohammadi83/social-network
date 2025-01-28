#ifndef DATABASE_H
#define DATABASE_H
#include "users.h"
#include "graph.h"

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
};

#endif // DATABASE_H
