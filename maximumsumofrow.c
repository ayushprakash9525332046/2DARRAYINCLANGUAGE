#include<stdio.h>
int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int max =0,index;
    for (int i=0;i<3;i++){
          int sum =0;
        for (int j=0;j<4;j++){
            sum+=arr[i][j];
         }
        if (sum>max){
            max =sum;
            index= i;
        }
    }
    printf("maximum number%d in index is %d",max,index);
    return 0;
}