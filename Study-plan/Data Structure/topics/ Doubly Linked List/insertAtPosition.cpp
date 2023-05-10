void insertAtPos(int pos,int element)
    {
        if(pos < 0 || pos > size)
        {
            cout<<"Out Of Range \n";
        }
        else
        {
            node*newNode = new node;
            newNode->item=element;
            if(pos==0)             // will be insert from index==0 will insert in front.
            {
                insertFront(element);
            }
            else if (pos == size) // will be insert from last index in linkedlist
            {
                insertLast(element);
            }
            else
            {
                node*cur=head;
                for(int i=1;i<pos;++i) cur=cur->next;
                newNode->next=cur->next;
                newNode->prev=cur;
                cur->next=newNode;
                cur->next->prev=newNode;
            }
            size ++;
        }
    }
