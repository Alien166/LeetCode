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
 
 
 // function to get top value in stack 
 
 void get_top(int&stacktop){
     if(is_empty()){
         cout<<"Stack empty on get top";
     }
     else{
         stacktop=array[top];
         cout<<stacktop;
     }
 };
};
