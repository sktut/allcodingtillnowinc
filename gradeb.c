#include<stdio.h>
int main()
{
    int m;
    printf("enter the marks", m);
scanf("%d",&m);
switch (m/10)
{
case 10:
case 9:printf("grade o");
break;
case 8:printf ("grade e");
break;
case 7:printf("grade a");
break;
case 6:printf("grade b");
break;
case 5:printf("grade c");
break;
case 4:printf("grade d");
break;
default:printf("fail");
    break;
}return 0;
}