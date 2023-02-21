#include<stdio.h>
int main(){
    int a; int b; int c;int d;
    printf("enter maths marks=");
    scanf("%d",&a);
    printf("enter phy marks=");
    scanf("%d",b);
    printf("enter chem marks=");
    scanf("%d",&c);
    d=(a+b+c)/300;
    if(a/100>=33 && b/100>=33 && c/100>=33 && d>40)
    {
        printf("pass");
    }else{
        printf("fail");
    }return 0;
}