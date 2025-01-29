#pragma once 
#include <iostream>
#include <map>
#include <list>
#include <vector>
#include "users.h"

using namespace std;

class Node : public users{
public:
    Node(std::string un , std::string n , std::string p , int ag , std::string gm):users(un , n , p , ag , gm){}
};

class Graph{
private: 


    map<string , Node*> nodes;
    map<Node* , list<Node*>*> naighborList; 
public:
    void addNode(std::string un , std::string n , std::string p , int ag , std::string gm){
        
        if(!nodes.count(un)){
            Node* temp = new Node(un , n , p , ag , gm);
            pair<string , Node*> p(un , temp);
            nodes.insert(p);
            pair<Node* , list<Node*>*> l(temp , new list<Node*>);
            naighborList.insert(l);
        }
        
    }

    void addEdge(string from , string to){
        if(!nodes.count(from) || !nodes.count(to))
            return;
        
        naighborList[nodes[from]]->push_back(nodes[to]);

    }

    void removeNode(string lable){
        if(!nodes.count(lable))
            return;

        for(auto& i: naighborList){
            naighborList[i.first]->remove(nodes[lable]);
        }
        naighborList.erase(nodes[lable]);
        nodes.erase(lable);
    }

    void removeEdge(string from , string to){
        if(nodes.count(from) || nodes.count(to))
            return;
        
        naighborList[nodes[from]]->remove(nodes[to]);
    }

    list<Node*>* getFollowers(std::string uname){
        if(nodes.count(uname))
            return naighborList[nodes[uname]];


        return nullptr;
    }


};

