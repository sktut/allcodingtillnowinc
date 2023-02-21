#include <stdio.h>
int main(){
    int row = 3;
    int columns = 3;
    int arr[3][3];
    int *ptr = arr[3][3];
    for(int i=0; i<row; i++){
        for(int j=0; j<columns; j++ ){
            printf("Enter %d row and %d column = ",i+1, j+1 );
            scanf("%d", &ptr);
        }

        }
        for(int i=0; i<row; i++){
        for(int j=0; j<columns; j++ ){
            printf("%d", ptr);

            
    }
    printf("\n");
    return 0;
}
    }
