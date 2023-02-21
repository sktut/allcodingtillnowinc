#include <stdio.h>
int main(){
    int marks[4];
    int *ptr;
    ptr = &marks[0];
    for(int i ; i<4 ; i++)
    {
        printf("Enter the value of %dth student= ",i+1);
        scanf("%d", marks[i]);
        ptr++;

    }
    for(int i; i<4; i++){
        printf("The value of the %d is %d \n ", i+1, marks[i]);        
    }
    return 0;
}