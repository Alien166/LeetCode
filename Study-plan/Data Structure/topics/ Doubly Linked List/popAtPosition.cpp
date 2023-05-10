void popAtPos(int element)
    {
        if(size==0)
        {
            cout<<"Empty List\n";
        }
        if(head->item==element)
        {
            popFirst();
        }
        else
        {
            node*cur=head->next;    // cuz i passed above if on the head
            while (cur !=NULL)
            {
                if(cur->item==element)
                    break;
                cur=cur->next;
            }
            if (cur==NULL)
            {
                cout<<"Not There\n";
            }
            else if(cur->next==NULL)
            {
                popLast();
            }
            else
            {
                cur->prev->next=cur->next;
                cur->next->prev=cur->prev;
                delete cur;
                size--;
            }



        }
    }
