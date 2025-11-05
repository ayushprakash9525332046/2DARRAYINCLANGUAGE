#include<stdio.h>
int main(){
    int arr[3][4],brr[3][4];
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    int crr[3][4];
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            crr[i][j]=arr[i][j]+brr[i][j];
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
}