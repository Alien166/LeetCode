 ~doublyList()
    {
        node*cur;
        while (head!=NULL)
        {
            head=head->next;
            delete temp;
        }
        tail=NULL;
        size=0;
    }
