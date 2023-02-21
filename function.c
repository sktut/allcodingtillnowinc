#include <stdio.h>
float average(int a , int b, int c);
int main(){
   int a ,b , c;
   printf("ENTER A= ",a);
   scanf("%d", &a);
   printf("ENTER B=", b);
   scanf("%d", &b);
   printf("ENTER C", c);
 scanf("%d", &c);
 printf("AVERAGE = %d", average(a ,b , c));
    return 0;
}
float average (int a, int b , int c){
    int result;
    result = (a + b + c);
    return result;

}