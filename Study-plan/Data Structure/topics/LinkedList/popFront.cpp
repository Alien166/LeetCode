void popFront(){
        if(count==0){
            return;
        }
        else if(count==1){
            free(head);  // free function will be deleted
            head=tail=NULL;
            count--;

        }
        else{
            node*cur=head;
            head=head->next;
            delete cur;
            count--;
        }

    }
