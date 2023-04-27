#include<bits/stdc++.h>
using namespace std;
template<class t>
class stack{
    struct node{
        t item;
        node*next;
    };
    node*top;
    
public:
    stack(){
        top=NULL;
    }
    void push(t newItem){
        node*newNode=new node;
        if(newNode==NULL){
            cout<<"Stack push cannot allocate memory";
        }
        else {
            newNode->item = newItem;
            newNode->next = top;
            top = newNode;
        }
    }

};
