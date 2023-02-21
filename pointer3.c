//to swap using pointer in funtion
#include <stdio.h>
void swap(int* a , int* b ){
    int temp;
    temp= *a;
    *a= *b;
    *b= temp;

}
int main(){
    int x=4;
    int y=5;
    printf("number before swap = %d     %d\n", x, y );
    swap(&x,&y);
    printf("number after swap = %d      %d", x,y );
    return 0;

}