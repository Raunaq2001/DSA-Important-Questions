int partitionArr(int arrp[],int lb,int ub){
    int pivot=arr[lb];
    int i=lb,j=ub;
    while(i<j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    if(i>j){
        int temp=arr[pivot];
        arr[pivot]=arr[j];
        arr[j]=temp;
    }
    return j;
}
void quickSort(int arr[],int lb,int ub){
    if(lb<ub){
        int pivot=partitionArr(arr,lb,ub);
        quickSort(arr,lb,pivot-1);
        quickSort(arr,pivot+1,ub);
    }
}
