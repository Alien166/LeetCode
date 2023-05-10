class doublyList{
private:
    struct node{
        int item;
        node*next;
        node*prev;
    };
    node*head;
    node*tail;
    int size;
public:
    doublyList(){
        head=tail=NULL;
        size=0;
    }
