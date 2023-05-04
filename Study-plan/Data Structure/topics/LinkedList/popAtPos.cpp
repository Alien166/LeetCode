void popAtPos(int element){
        if(isEmpty()){
            return;
        }
        node*cur,*prev;
        if(head->item==element){       // in case this element at first position
            cur=head;
            head=head->next;
            delete cur;
        }
        else
        {
            cur=head->next;
            prev=head;
            while (cur!=NULL)
            {
                if(cur->item==element)break;
                cur=cur->next;
                prev=head;

            }
            if(cur=NULL)
                cout<<"NOT FOUND"<<endl;
            else
                prev->next=cur->next;
            if(tail==cur)
            {
                tail=prev;
                delete cur;
                count --;
            }
        }

    }
