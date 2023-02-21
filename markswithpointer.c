#include <stdio.h>
int main(){
    int arr[5];
    int *ptr;
    ptr = &arr[0];
    for(int i; i<5; i++){
        printf("enter the marks of %d student= ", i+1);
        scanf("%d", &ptr);
        ptr++;

    }
    for(int i; i<5; i++){
        printf("the value of %d student = %d \n",i+1 , arr[i]);
    }
return 0;
}
