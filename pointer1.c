#include <stdio.h>
int main(){
    int a = 34;
    int* ptr = &a; 
    printf("the adress of the pointer= %p\n", &ptr);
        printf("the value of a = %d\n", *ptr);
        printf("the adress of a = %p\n", &a);
        printf("the value of the pointer= %d\n", ptr);
        printf("the address of a %p", ptr);
    
}