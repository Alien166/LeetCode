void pop(t stacktop){         //this pop -> Here clear and keeps the value it clears
        if(IsEmpty()){
            cout<<"Stack empty on pop";
        }
        else{
            stacktop=top->item;
            node*temp=top;
            top=top->next;
            temp=top->next=NULL;
            delete temp;

        }
    }
