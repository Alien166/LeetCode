 void clear(){
        while (front!=NULL)
        {
            node*curr=front;
            front=front->next;
            delete curr;

        }
    rear=NULL;
    }
