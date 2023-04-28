void display() {
      if (!isEmpty()) {
          for (int i = front; i != rear; i = (i + 1) %
                                             MAX_SIZE) {  // % MAXSIZE becouse it's a circule queue can be return agin and print elements
              cout << arr[i] << " ";
          }
          cout << arr[rear];
      }else{
          cout<<"PLZ Enqueue first U don't have elements in queue"<<endl;
      }
  }
