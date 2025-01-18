#include "message.h"
Message::Message(users* user)
{
    sender = user;
}

void Message::sendMessage(users *user, string message)
{
    if(messageList.count(user)){
        messageList.at(user)->push(message);
    }else{
        stack<string>* temp = new stack<string>;
        temp->push(message);
        pair<users* , stack<string>*> p(user , temp);
        messageList.insert(p);
    }
}
