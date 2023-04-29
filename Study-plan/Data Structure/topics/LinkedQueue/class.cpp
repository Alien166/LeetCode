class linkedQueue{
private:
     struct node{
         int item;
         node *next;
     };
    node*front;
    node*rear;
    int count;
public:
    linkedQueue():front(NULL),rear(NULL),count(0){}
