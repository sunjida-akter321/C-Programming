#include<stdio.h>
int main()
{

float r,area;
float PI=3.1416;

    printf("Enter the value of radius:");
    scanf("%f",&r);    

    area= PI*r*r;
    printf("Area of circle:%0.2f",area);

    return 0;
}