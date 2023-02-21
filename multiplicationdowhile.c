#include <stdio.h>
int main(){
 int i=1;
 int n;
 printf("ENTER THE NUMBER=",n);
 scanf("%d", &n);
do{
printf("%d",n );
printf("x%d =",i);
printf("%d\n", n*i);
i++;

}while(i<10);

 
 return 0;
}
