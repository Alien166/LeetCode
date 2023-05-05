void search(int element)
 {
        node*cur=head;
        int position=0;
     while (cur!=NULL)
     {
         if(cur->item==element)
             return position;
         cur=cur->next;
         position++;
     }
     return -1;
 }
