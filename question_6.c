//6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
#include<conio.h>
int fact(int );
int main()
{
    int num;
    printf("Enter number to clculate its Factorial:\n");
    scanf("%d",&num);
    printf("%d! = %d",num,fact(num));
    getch();
    return 0;
}
int fact(int num)
{
    int i,fact=1;
    if(num==0)
      return 1;
    for(i=num;i>=1;i--)
      fact *= i;
    return fact;
}