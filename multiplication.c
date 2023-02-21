#include <stdio.h>
int main(){
 int i=0;
 int n;
 printf("ENTER THE NUMBER=",n);
 scanf("%d", &n);
 for(int i=1; i<10; i++){
    printf("%dx",n);
    printf("%d=",i);
    printf ("%d \n", n*i);
 }
 return 0;
}