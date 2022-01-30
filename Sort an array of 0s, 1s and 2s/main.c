#include <stdio.h>
#include <stdlib.h>
int main()
{
    int zero=0,one=0,two=0,arr[5],i,size=5;
    printf("Enter the array = ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        if(arr[i]==0){
            zero++;
        }
        else if(arr[i]==1){
            one++;
        }
        else if(arr[i]==2){
            two++;
        }
    }
    i=0;
    int j=0,k=0;
    while(i<zero){
        arr[i]=0;
        i++;
    }
    while(j<one){
        arr[i]=1;
        j++;
        i++;
    }
    while(k<two){
        arr[i]=2;
        k++;
        i++;
    }
    printf("Updated array = ");
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
        printf(" ");
    }
    return 0;
}
