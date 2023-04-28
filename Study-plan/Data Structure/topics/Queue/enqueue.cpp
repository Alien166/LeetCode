void enqueue(int element){
        if(isFull()){
            cout<<"Can't enqueue"<<endl;
        }else{
            rear=(rear+1) % MAX_SIZE;
            arr[rear]=element;
            count ++;
        }
    }
