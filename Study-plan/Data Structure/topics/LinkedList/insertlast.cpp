void insertLast(int element){
        node*newNode=new node;
        newNode->item=element;
        if(isEmpty()){
            head=tail=newNode;
            newNode->next=NULL;

        }
        else{
            tail->next=newNode;
            newNode->next=NULL;
            tail=newNode;
        }
        count++;
    }
