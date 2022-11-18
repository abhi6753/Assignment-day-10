//2. Write a function to calculate simple interest. (TSRS)
#include<conio.h>
#include<stdio.h>
float SimpleIntrest(float,float,float);
int main()
{
    float p,r,t,total;
    printf("Enter principle amount:\n");
    scanf("%f",&p);
    printf("Enter rate of intrest:\n");
    scanf("%f",&r);
    printf("Enter time( in year):\n");
    scanf("%f",&t);
    total = p + SimpleIntrest(p,r,t);
    printf("Total ammount = %.2f",total);
    getch();
    return 0;
}
float SimpleIntrest(float x,float y , float z)
{
   return (x*y*z)/100.0;
}