//1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
#include<conio.h>
#define PI 3.14
float AreaOfCircle(float );
int main()
{
    float r,Area;
    printf("Enter the raidus of circle:\n");
    scanf("%f",&r);
    Area = AreaOfCircle(r);
    printf("Area of circle is %.2f",Area);
    getch();
    return 0;
}
float AreaOfCircle(float r)
{
   return PI*r*r;
}