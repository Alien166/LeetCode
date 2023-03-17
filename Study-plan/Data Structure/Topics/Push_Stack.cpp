class stack{
private:
    int top;
    int array[MAX_SIZE];
    stack(){
        top=-1;   // to intialize top
    }
public:
 void push(int value){
        if(value>=MAX_SIZE-1){ // -1 why?? cuz he starts from  0  -> 99
            cout<<"Stack is fill\n";
        }
        else{
            top++;
            array[top]=value;
        }
};
