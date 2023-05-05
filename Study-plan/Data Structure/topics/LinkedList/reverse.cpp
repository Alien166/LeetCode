void reverse()
 {
        node*prev,*cur,*next;
        prev=Null;
        cur=head;
        next=cur->next;
     while (next!=Null || cur !=NULL){
         next=cur->next;     // cuz don't cut the linked list elements
         cur->next=prev;
         prev=cur;
         cur=next;
     }
     head=prev;
 }
