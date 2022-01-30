/* Imp Question
Question: https://leetcode.com/problems/set-matrix-zeroes/
Solution: https://www.tutorialcup.com/interview/matrix/set-matrix-zeroes.htm
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[3][3],i,j,k,r=3,c=3;
    printf("Enter the matrix = ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(arr[i][j]==0){
                for(k=0;k<c;k++){
                    if(arr[i][k]!=0){
                        arr[i][k]=9999;
                    }
                }
                break;
            }
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(arr[i][j]==0){
                for(k=0;k<r;k++){
                    if(arr[k][j]!=0){
                        arr[k][j]=9999;
                    }
                }
                break;
            }
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(arr[i][j]==9999){
                arr[i][j]=0;
            }
        }
    }
    printf("Updated array = ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",arr[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
