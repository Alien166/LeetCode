 void popLast()
    {
        if(size==0)
        {
            cout<<"Empty List\n";
        }
        else if(size ==1)
        {
            delete head;
            head = tail =NULL;
        }
        else
        {
            node*cur=tail;
            tail=tail->prev;
            tail->next=NULL;
            delete cur;
        }
        size --;
    }
