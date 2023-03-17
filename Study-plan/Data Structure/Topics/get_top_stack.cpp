void get_top(int stacktop){
     if(is_empty()){
         cout<<"Stack empty on get top";
     }
     else{
         stacktop=array[top];
         cout<<stacktop;
     }
 };
