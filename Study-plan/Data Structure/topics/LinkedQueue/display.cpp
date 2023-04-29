void display()
    {
        node*curr=front;
        while (curr!=NULL)
        {
            cout<<curr->item;
            curr=curr->next;
        }
    }
