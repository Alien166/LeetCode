void insertAtPosition(int pos,int element){
        node*newNode=new node;
        newNode->item=element;
        if(pos==0){
            insertFront(element);
        }
        else if(count==pos){
            insertLast(element);
        }
        else
        {
            node*cur=head;
            for(int i=1;i<pos;++i){
                cur=cur->next;

            }
            newNode->next=cur->next;
            cur->next=newNode;
            count++;

        }

    }
