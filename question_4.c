//4. Write a function to print first N natural numbers (TSRN)
#include<conio.h>
#include<stdio.h>
void natural(int);
int main()
{
    int num;
    printf("Enter number to print first N natural numbers:\n");
    scanf("%d",&num);
    natural(num);
    getch();
    return 0;
}
void natural(int num)
{
    int i=1;
    printf("First %d natural numbers are:\n",num);
    while (i<=num)
      printf("%d\n",i++);
}