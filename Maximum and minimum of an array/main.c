#include <stdio.h>
#include <stdlib.h>
int min(int arr[]){
    int min=arr[0],i;
    for(i=1;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int max(int arr[]){
    int max=arr[0],i;
    for(i=1;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[5],i;
    printf("Enter the array elements = ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Minimum element = ");
    int minimum=min(arr);
    printf("%d",minimum);
    printf("Maximum element = ");
    int maximum=max(arr);
    printf("%d",maximum);
    return 0;
}
