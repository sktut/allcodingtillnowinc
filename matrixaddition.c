#include <stdio.h>
int main(){
    int martix1[3][3];
    int matrix2[3][3];
    int sum;
    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("enter the %d row and %d column of first matrix");
            scanf("%d", &matrix2[i][j]);
        }
    }
for(int m =0; m<3; m++){
        for(int n=0; n<3; n++){
            printf("enter the %d row and %d column of first matrix");
            scanf("%d", &matrix2[m][n]);
        }
    }
    printf("sum=");
    for(int i ; i <3; i++){
        for(int m; m<3;m++)
        sum= matrix2[i][m] + matrix2[i][m];
    }
}