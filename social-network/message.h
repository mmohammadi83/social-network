#ifndef MESSAGE_H
#define MESSAGE_H
#include <unordered_map>
#include <stack>
#include "users.h"
#include <iostream>

using namespace std;


class Message
{
private:
    users* sender;
    unordered_map<users* , stack<string>*> messageList;

public:
    Message(users*);
    void sendMessage(users* , string);
};

#endif // MESSAGE_H
