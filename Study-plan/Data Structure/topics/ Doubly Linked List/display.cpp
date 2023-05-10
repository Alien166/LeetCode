 void display()
    {
        node*cur=head;
        cout<<"Elements List ......"<<endl;
        while (cur!=NULL)
        {
            cout<<cur->item<<" ";
            cur=cur->next;
        }
        cout<<"\n";
    }
