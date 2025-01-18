#ifndef USERS_H
#define USERS_H
#include <iostream>

class users
{
private:
    std::string Uname;
    std::string name;
    std::string password;
    int age;
    std::string gmail;

public:
    users(std::string un , std::string n , std::string p , int ag , std::string gm);

    void setUName(std::string n);
    std::string getUName();
    void setName(std::string n);
    std::string getName();
    void setPass(std::string n);
    std::string getPass();
    void setage(int n);
    int getage();
    void setgmail(std::string n);
    std::string getgmail();
};

#endif
