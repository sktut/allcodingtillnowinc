#include <stdio.h>
int pointer(int n){
    
    printf("the address of the variable= %p \n", ptr);
    
}
int main(){
    int* ptr = &n;
    int i;
    printf("enter the number =");
    scanf("%d", &i);
    printf("the adress of the pointer variable = %p\n", &i);
    pointer(i);
    return 0;
}