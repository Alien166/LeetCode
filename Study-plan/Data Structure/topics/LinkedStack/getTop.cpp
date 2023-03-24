void getTop(t stacktop){         //this getTop -> function to getTop item in the stack
        if(IsEmpty()){
            cout<<"Stack empty on getTop";
        }
        else{
            stacktop=top->item;
        }
    }
