 void pop(int &element){    // this function pop to hold value before pop element ;
     if(is_empty()){
         cout<<"stack empty on pop";
     }
     else{
         element=array[top];
         top--;
     }
};
