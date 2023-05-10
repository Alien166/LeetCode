 void popFirst()
    {
        if(size==0)
        {
           cout<<"Empty List\n";
        }
        else if(size==1)
        {
            delete head;
            head =tail = NULL;
        }
        else
        {
            node*cur=head;
            head=head->next;
            head->prev=NULL;
            delete cur;
        }
        size --;
    }
