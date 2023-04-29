void dequeue(){

        if(isEmpty())
        {
            cout<<"U have not elements to delete"<<endl;
        }

        else
        {
                node*tempPtr=front;       // first link temp with front.
                front=front->next;        // move el front
                tempPtr->next=NULL;       // make temp equal NULL .
                delete tempPtr;            // delete temp..
                count--;

        }

    }
