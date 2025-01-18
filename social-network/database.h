#ifndef DATABASE_H
#define DATABASE_H
#include "users.h"


class DataBase
{
public:
    DataBase();

    static void addUser(users& user);
    static bool userExists(std::string Uname);
};

#endif // DATABASE_H
