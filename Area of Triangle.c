#include<stdio.h>

int main()
{

float a,b,area;

    printf("Enter the value of height:");
    scanf("%f",&a);

    printf("Enter the value of base:");
    scanf("%f",&b);
  
    area= (a*b)/2;
    printf("Area of triangle:%0.2f",area);

    return 0;
 }