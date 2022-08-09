    //https://www.youtube.com/watch?v=gYmWHvRHu-s&list=PLgUwDviBIf0p4ozDR_kJJkONnb1wdx2Ma&index=70
    //https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1
    bool isAllocation(int arr[],int arrSize,int threshold,int numStudents){
        int ctr=0,sum=0;
        for(int i=0;i<arrSize;i++){
            if(sum+arr[i]>threshold){
                ctr++;
                sum=arr[i];
                if(sum>threshold) return false;
            }
            else sum=sum+arr[i];
        }
        if(ctr<numStudents) return true;
        return false;
    }
    int findPages(int arr[], int arrSize, int numStudents)
    {
        if(numStudents>arrSize) return -1;
        int lb=*min_element(arr,arr+arrSize),ub;
        for(int i=0;i<arrSize;i++) ub=ub+arr[i];
        while(lb<=ub){
            int mid=(lb+ub)/2;
            if(isAllocation(arr,arrSize,mid,numStudents)) ub=mid-1;
            else lb=mid+1;
        }
        return lb;
    }
