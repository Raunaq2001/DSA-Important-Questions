int binarySearch(int arr[],int lb,int ub,int key){
    while(lb<ub){
        int mid=(lb+ub)/2;
        if(arr[mid]==key){
            return 1;
        }
        else if(key>arr[mid]){
            lb=mid+1;
        }
        else{
            up=mid-1;
        }
    }
    return 0;
}
void infiniteSearch(int arr[],int key){
    int lb=0;
    int ub=1;
    while(ub<key){
        lb=ub;
        ub=ub*2;
    }
    int result=binarySearch(arr,lb,ub,key);
    if(result==1){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
}
