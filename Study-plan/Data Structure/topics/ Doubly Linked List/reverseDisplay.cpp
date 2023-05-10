
    void reverseDisplay()
    {
        node*cur=tail;
        cout<<"Elements List after reverse......"<<endl;
        while (cur!=NULL)
        {
            cout<<cur->item<<" ";
            cur=cur->prev;
        }
        cout<<"\n";
    }
