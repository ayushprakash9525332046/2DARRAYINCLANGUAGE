#include<stdio.h>
int main(){
    int m;
    int n;
    printf ("enter a row");
    scanf("%d",&m);
    printf("enter a column");
    scanf("%d",&n);
    int a[m][n];                                                                 
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    int sumRectangle=0,L1=0,R1=1,L2=2,R2=3;
    for (int i=0;i<=2;i++){
        for (int j=1;j<=3;j++){
            sumRectangle+=a[i][j];
        }
    }
    printf("%d",sumRectangle);
    return 0;
}