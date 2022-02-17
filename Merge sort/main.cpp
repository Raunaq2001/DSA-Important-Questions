void merging(int arr[],int lb,int mid,int ub){
    int i=lb,j=mid+1,k=lb;
    int copyArr[ub+1];
    while(i<=mid && j<=ub){
        if(arr[i]<arr[j]){
            copyArr[k]=arr[i];
            i++;
        }
        else{
            copyArr[k]=arr[j];
            j++;
        }
        k++;
    }
    if(i<=mid){
        while(i<=mid){
            copyArr[k]=arr[i];
            i++;
            k++;
        }
    }
    else{
        while(j<=ub){
            copyArr[k]=arr[j];
            j++;
            k++;
        }
    }
    for(int i=lb;i<=ub;i++){
        arr[i]=copyArr[i];
    }
}
void mergeSort(int arr,int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        mergeSort(arr,lb,mid);
        mergeSort(arr,mid+1,ub);
        mergeing(arr,lb,mid,ub);
    }
}
