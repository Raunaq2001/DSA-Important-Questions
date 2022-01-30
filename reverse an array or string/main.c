#include <stdio.h>
#include <stdlib.h>
void reverse(int arr[]){
    int size=3,start=0,end=size-1,temp;
    while(start<=end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[3],i;
    printf("Enter the array element = ");
    for(i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    printf("Reversed array = ");
    reverse(arr);
    for(i=0;i<3;i++){
        printf("%d",arr[i]);
        printf(" ");
    }
    return 0;
}
