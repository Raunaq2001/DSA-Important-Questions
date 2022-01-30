#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size1=1000,size2=1000;
    printf("Enter array 1 size = ");
    scanf("%d",&size1);
    printf("Enter array 2 size = ");
    scanf("%d",&size2);
    int arr1[size1],arr2[size2],i,j;
    printf("Enter array 1 = ");
    for(i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter array 2 = ");
    for(i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }
    printf("Union = ");
    i=0,j=0;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            printf("%d",arr1[i]);
            printf(" ");
            i++;
        }
        else if(arr1[i]==arr2[j]){
            printf("%d",arr1[i]);
            printf(" ");
            i++;
            j++;
        }
        else{
            printf("%d",arr2[j]);
            printf(" ");
            j++;
        }
    }
    while(i<size1){
        printf("%d",arr1[i]);
        printf(" ");
        i++;
    }
    while(j<size2){
        printf("%d",arr2[j]);
        printf(" ");
        j++;
    }
    printf("\nIntersection = ");
    for(i=0;i<size1;i++){
        for(j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                printf("%d",arr1[i]);
                printf(" ");
                break;
            }
        }
    }
    return 0;
}
