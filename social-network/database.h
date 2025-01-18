#ifndef DATABASE_H
#define DATABASE_H
#include "users.h"


class DataBase
{
public:
    DataBase();

    static void addUser(users& user);
    static bool userExists(std::string Uname);
    static int validationUser(std::string Uname , std::string pass);
};

#endif // DATABASE_H
