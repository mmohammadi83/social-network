#ifndef MESSAGE_H
#define MESSAGE_H
#include <unordered_map>
#include <list>
#include "users.h"
#include <iostream>

using namespace std;


class message
{
private:
    unordered_map<users* , list<string>*> map;
public:
    message();
};

#endif // MESSAGE_H
