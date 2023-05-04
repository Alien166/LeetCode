void popLast()        // will be used two pointer.
   {
        node*cur=head->next;
        node*prev=head;
       while (cur!=tail)
       {
           prev=cur;
           cur=cur->next;
       }
       delete cur;
       prev->next=NULL;
       tail=prev;
       count--;
   }
