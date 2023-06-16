void insertionSort(int arr[], int size)
{
    int key,j;
    for(int i=1;i<size;++i)
    {
        key=arr[i];        // to access value of array []
        j=i-1;             // to bring thw index of array[]
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
