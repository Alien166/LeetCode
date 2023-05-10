void insertFront(int element)
    {
        node*newNode=new node;
        newNode->item=element;
        if(isEmpty())
        {
            head = tail = newNode;
            newNode->next=newNode->prev=NULL;
        }
        else
        {
            newNode->next=head;
            newNode->prev=NULL;
            head->prev=newNode;
            head=newNode;       // will be move head to the new node.
        }
        size++;
    }
