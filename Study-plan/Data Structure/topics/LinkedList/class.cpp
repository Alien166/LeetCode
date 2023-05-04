class linkedList{
    struct node{
        int item;
        node* next;
    };
    node*head;
    node*tail;
    int count;
public:
    linkedList(){
        head =tail=NULL;
        count=0;
    }
