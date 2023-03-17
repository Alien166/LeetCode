class stack{
private:
    int top;
    int array[MAX_SIZE];
    stack(){
        top=-1;
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
 bool is_empty(){
     if(top==-1) {
         return true;
     }
     else{
         return false;
     }
 };
 
 // function 2 top pop
 void pop(int &element){    // this function pop to hold value before pop element ;
     if(is_empty()){
         cout<<"stack empty on pop";
     }
     else{
         element=array[top];
         top--;
     }
};
