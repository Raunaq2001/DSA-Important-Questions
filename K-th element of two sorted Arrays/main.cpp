    //@author: RAUNAQ SINGH
    void getSortedArray(int arr1[],int arr2[],int arr3[],int n,int m){
        int i=0,j=0,k=0;
        while(i<n && j<m){
            if(arr1[i]<=arr2[j]){
                arr3[k]=arr1[i];
                i++;
            }
            else{
                arr3[k]=arr2[j];
                j++;
            }
            k++;
        }
        while(i<n){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        while(j<m){
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int finalSize=n+m;
        int arr3[finalSize];
        getSortedArray(arr1,arr2,arr3,n,m);
        return arr3[k-1];
    }
