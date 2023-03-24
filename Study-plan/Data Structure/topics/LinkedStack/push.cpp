#include<bits/stdc++.h>
using namespace std;
template<class t>

class stack{
    struct node{
        t item;              // t ->  it's a general data type ! item it's a var of node
        node *next;         // next -> it's a pointer the next item
    };
    node *top;             // top -> top it's a pointer refere to top stack.
   
public:
    stack(){
    top=NULL;               // initalize top == NULL.
    }   

    void push(t nextItem){
        node *nextItemptr =new node;      //new node to store next item
        if(nextItemptr==NULL){
            cout<<"Stack push cannot allocate memory";
        }
        else{
            nextItemptr->item=nextItem;
            nextItemptr->next=top;      // this item will be a top.
            top=nextItemptr;       // push top to highest item.

        }
    }
};
