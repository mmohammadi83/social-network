#include "users.h"

users::users(std::string un , std::string n , std::string p, int ag , std::string gm)
{
    Uname = un;
    name = n;
    password = p;
    age = ag;
    gmail = gm;
}

void users::setUName(std::string n)
{
    Uname = n;
}

std::string users::getUName()
{
    return Uname;
}

void users::setName(std::string n)
{
    name = n;
}

std::string users::getName()
{
    return name;
}

void users::setPass(std::string n)
{
    password = n;
}

std::string users::getPass()
{
    return password;
}

void users::setage(int n)
{
    age = n;
}

int users::getage()
{
    return age;
}

void users::setgmail(std::string n)
{
    gmail = n;
}

std::string users::getgmail()
{
    return gmail;
}

