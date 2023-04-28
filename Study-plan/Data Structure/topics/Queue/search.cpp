int queueSearch(int element){
        int pos=-1;
        if(!isEmpty()){
            for(int i=front ; i!=rear ; i=(i+1)% MAX_SIZE){
                if(arr[i]==element){
                    pos=i;
                    break;
                }
                if(pos==-1)
                {
                    if(arr[rear]==element){
                        pos=rear;
                    }
                }
            }

        }
        else
            cout<<"Q IS EMPTY"<<endl;
  return pos;
