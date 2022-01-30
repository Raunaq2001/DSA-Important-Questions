#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size=9;
    int arr1[size],arr2[size],i=0,j=0;
    printf("Enter the array elements = ");
    for(i=0;i<size;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Entered array = ");
    for(i=0;i<size;i++){
        printf("%d",arr1[i]);
        printf(" ");
    }
    for(i=0;i<size;i++){
        if(arr1[i]<0){
            arr2[j]=arr1[i];
            j++;
        }
    }
    for(i=0;i<size;i++){
        if(arr1[i]>0){
            arr2[j]=arr1[i];
            j++;
        }
    }
    printf("Updated array = ");
    for(i=0;i<size;i++){
        printf("%d",arr2[i]);
        printf(" ");
    }
    return 0;
}
