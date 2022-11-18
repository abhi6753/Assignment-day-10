//10. Write a function to print all prime factors of a given number. For example, if the \
number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include<stdio.h>
#include<conio.h>
void PrimeFactor(int);
int main()
{
    int num;
    printf("Enter number to print its all prime factor:\n");
    scanf("%d",&num);
    PrimeFactor(num);
    getch();
    return 0;
}
void PrimeFactor(int num)
{
    int i;
    for(i=2;num!=1;i++)
    {
        if(num%i==0)
        {
            printf("%d ",i);
            num/=i;
            continue;
        }
    }
}