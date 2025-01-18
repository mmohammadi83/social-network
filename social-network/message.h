#ifndef MESSAGE_H
#define MESSAGE_H
#include <unordered_map>
#include <list>
#include "users.h"
#include <iostream>

using namespace std;


class Message
{
private:
    
    unordered_map<users* , list<string>*> messageList;

public:
    
void sendMessage(users *user, string message)
{
    if(!user) return;

    if(messageList.count(user)){
        messageList.at(user)->push_back(message);
    }else{
        list<string>* temp = new list<string>;
        temp->push_back(message);
        pair<users* , list<string>*> p(user , temp);
        messageList.insert(p);
    }
}

};

#endif // MESSAGE_H
