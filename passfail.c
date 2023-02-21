#include <stdio.h>
int main()
{
    int marks;
    int marks_m;
    int marks_p;
    int marks_c;
    printf("enter maths", marks_m);
    scanf("%d", &marks_m);
    printf("enter physics", marks_p);
    scanf("%d", &marks_p);
    printf("enter chemistry", marks_c);
    scanf("%d", &marks_c);
    marks = (marks_c + marks_m + marks_p)/300 ; 
    if(marks_c<33 && marks_m <33 && marks_p<33 && marks <40){

        printf("you are fail");

    }
    else {
        printf("you are pass");
    }
   return 0;
    }

