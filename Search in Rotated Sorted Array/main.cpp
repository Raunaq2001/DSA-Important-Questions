// Leetcode question # 33
int findIndex(vector<int> arr,int key){
    int lb=0,ub=arr.size()-1;
    while(lb<=ub){
        int mid=(lb+ub)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[lb]<=arr[mid]){
            if(key>=arr[lb] && key<=arr[mid]){
                ub=mid-1;
            }
            else{
                lb=mid+1;
            }
        }
        else{
            if(key>arr[mid] && key<=arr[ub]){
                lb=mid+1;
            }
            else{
                ub=mid-1;
            }
        }
    }
    return -1;
}
