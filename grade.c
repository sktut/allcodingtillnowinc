#include <stdio.h>
int main()
{
 int marks;
 printf("Enter your marks", marks);
 scanf("%d", &marks);
 switch(marks/10)
{
    case 9:printf("the grade is O");
    break;
    case 8:printf("The grade is E");
    break;
    case 7:printf("The grade is A");
    break;
    case 6: printf("the grade is  B");
    break;
    default :
    printf("fail");
    break;
}
return 0;
}