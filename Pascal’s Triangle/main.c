/* Question from Striver SDE
Question: https://leetcode.com/problems/pascals-triangle/
Solution: https://www.geeksforgeeks.org/pascal-triangle/
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size=4;
    int arr[size][size],i,j,k;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            arr[i][j]=0;
        }
    }
    printf("Pascal's Triangle = ");
    printf("\n");
    for(i=0;i<size;i++){
        for(j=0;j<=i;j++){
            if(i==j||j==0){
                arr[i][j]=1;
            }
            else{
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
            printf("%d",arr[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
