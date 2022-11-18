//7. Write a function to calculate the number of combinations one can make from n items\
and r selected at a time. (TSRS)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int fact(int);
int combination(int ,int );
int main()
{
    int n; //the set or population
    int r; //subset of n or sample set
    int c; //Combination
    printf("Enter value of n:\n");
    scanf("%d",&n);
    printf("Enter value of r:\n");
    scanf("%d",&r);
    c = combination(n,r);
    printf("%d possible combination",c);
    getch();
    return 0;
}
int combination(int n,int r)
{
    int c;
    if(n>=r && r>=0)
    {
        c =  fact(n)/(fact(r)*fact(n-r));
        return c;
    }
    else
    {
       printf("please enter n >= r >= 0\n");
       exit(0);
    }
    
}
int fact(int a)
{
    if(a==0||a==1)
     return 1;
    return a*fact(a-1);
}