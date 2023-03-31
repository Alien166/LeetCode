int BinarySearch(int arr[],int size,int value){
    int low=0;
    int hight=size-1;
    while (low<=hight){
        int mid=(low+hight)/2;
        if(arr[mid]==value)
            return mid;
        else if(arr[mid]<value)
            low = mid + 1;
        else
            hight= mid - 1;
    }
    return -1;
}
