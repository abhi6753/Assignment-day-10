//9. Write a function to check whether a given number contains a given digit or not.(TSRS)
#include<stdio.h>
#include<conio.h>
short Check(int,short);
int main()
{
    int num;
    short digit;
    printf("Enter number:\n");
    scanf("%d",&num);
    printf("Enter a digit to check whether given number containns or not:\n");
    scanf("%hi",&digit);
    Check(num,digit)?printf("%hi is in this %d number",digit,num):printf("%hi is not in this %d number",digit,num);
    getch();
    return 0;
}
short Check(int num,short digit)
{
   short flag;
   while(num)
   {
       if(num%10 == digit)
       {
           flag = 1; // It is just an indicator
           return flag;
       }
       num/=10;     
   }
}
