 void enqueue(int element){
        if(isEmpty()){
            front=new node;
            front->item=element;
            front->next=NULL;
            rear=front;
            count ++;
        }
        else{

            node*newPtr=new node;
            newPtr->item=element;
            newPtr->next=NULL;
            rear->next=newPtr;     // to "linked" rear for new node
            rear=newPtr;          // to "move" rear with new node
            count ++;

        }

    }
