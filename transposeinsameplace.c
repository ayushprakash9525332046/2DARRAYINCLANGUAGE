#include<stdio.h>
int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    int arr[n][n];
    printf("enter a matrix ");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d ",&arr[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            int temp;
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}