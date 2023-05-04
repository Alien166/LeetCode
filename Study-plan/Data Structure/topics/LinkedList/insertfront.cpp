void insertFront(int element){
        node*newNode=new node;
        newNode->item=element;
        if(isEmpty()){                // will be Insert for first time inside linkedlist
            head =tail=newNode;
            newNode->next=NULL;

        }
        else {
            newNode->next = head;
            head = newNode;
        }
    count++;
}
