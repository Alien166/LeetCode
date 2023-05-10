void insertLast(int element)
    {
        node*newNode=new node;
        newNode->item=element;
        if(isEmpty())
        {
            head = tail =newNode;
            newNode->next = newNode->prev = NULL;
        }
        else
        {
            newNode->next=NULL;
            newNode->prev=tail;
            tail->next=newNode;
            tail=newNode;

        }
        size ++;

    }
