#include <stdio.h>
#include <stdlib.h>
void main()
{
int sub1,sub2,sub3,sub4,Grade;
printf("Enter the marks of 4 subject:\n");
scanf("%d %d %d %d",&sub1,&sub2,&sub3,&sub4);
Grade=(sub1+sub2+sub3+sub4)/4;
if (Grade<40)
printf("Fail");
else
printf("Pass");
}