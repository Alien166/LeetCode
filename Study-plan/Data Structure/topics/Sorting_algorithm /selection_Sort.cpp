void selectionSort(int arr[], int size)
{
    int minInd;
    for(int i=0;i<size-1;i++)
    {
        minInd=i;
        for(int j=i+1;i<size;++j){
            if(arr[j] < arr[minInd]){
                minInd=j;
                swap(arr[minInd],arr[i]);
            }
        }
    }
}
