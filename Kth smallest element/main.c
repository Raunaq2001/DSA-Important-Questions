/* Use either Merge Sort or Heap Sort to getO(NlogN) complexity*/
#include <stdio.h>
#include <stdlib.h>
void sort(int arr[]){
    int i,j,size=5,temp,flag=0;
    for(i=0;i<size-1;i++){
        flag=0;
        for(j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            flag=1;
        }
        if(flag==0){
            break;
        }
    }
}
int main()
{
    int arr[5],i,num;
    printf("Enter the array elements = ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr);
    printf("Enter the Kth element = ");
    scanf("%d",&num);
    printf("%d",arr[num-1]);
    return 0;
}
