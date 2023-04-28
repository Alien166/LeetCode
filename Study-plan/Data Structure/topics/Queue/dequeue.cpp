void dequeue(){
        if(isEmpty()){
            cout<<"Can't dequeue"<<endl;
        }else{
            front=(front+1) %MAX_SIZE;
            count --;
        }
    }
