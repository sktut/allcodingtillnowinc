#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    printf("ENTER THE FIRST NUMBER=%d", a);
    scanf("%d", &a);
    printf("ENTER THE SECOND NUMBER=%d", b);
    scanf("%d", &b);
    printf("ENTER THE THIRD NUMBER=%d", c);
    scanf("%d", &c);
    printf("ENTER THE FOURTH NUMBER=%d", d);
    scanf("%d", &d);
    if(a>c && a>d && a>b){
       printf("the greatest number is = %d", a);
    }
    else if(b>c && b>d && b>a){
    printf("the greatest number is = %d", b);  
    }
    else if(c>d && b>b && b>a){
printf("the greatest number is = %d", c);
    }
    else if(d>c && d>b && d>a){
printf("the greatest number is = %d", d);
    }
    else{
        printf("all equal");
    }
    return 0;
}