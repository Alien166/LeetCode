void pop(){                   // Here it erases and does not keep the value that it erases.
        if(IsEmpty())
        {
            cout<<"Stack empty on pop";
        }
        else{
            node*temp=top;
            top=top->next;
            temp=top->next=NULL;
            delete temp;

        }
    }
