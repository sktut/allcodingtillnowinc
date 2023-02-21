#include <stdio.h>
int main(){
    int row=3;
    int column =2;
    int arr[3][2];
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            printf("enter the %d row and %d column value =", i+1, j+1);
            scanf("%d", &arr[i][j]);

        }

    }
    for(int i=0; i<row;i++){
        for(int j=0 ; j<column; j++){
            printf("%d ", arr[i][j]);
          
        }
        printf("\n");
    }


return 0;
}