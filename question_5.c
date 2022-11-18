//5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
#include<conio.h>
void OddNatural(int);
int main()
{
    int num;
    printf("How many first N odd natural numbers you want to print:\n");
    scanf("%d",&num);
    OddNatural(num);
    getch();
    return 0;
}
void OddNatural(int num)
{
    int i=1;
    printf("First %d odd natural numbers are:\n",num);
    while(i<=num*2)
    {
       printf("%d\n",i);
       i+=2;
    }
}