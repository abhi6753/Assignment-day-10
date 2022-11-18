//8. Write a function to calculate the number of arrangements one can make from n items\
and r selected at a time. (TSRS)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int permutation(int,int);
int fact(int);
int main()
{
    int n; //the set or population
    int r; //subset of n or sample set
    int p; // permutation
    printf("Enter value of n and r:\n");
    scanf("%d%d",&n,&r);
    p=permutation(n,r);
    printf("%d possible result",p);
    getch();
    return 0;
}
int permutation(int n,int r)
{   if(n>=r&&r>=0)
     return fact(n)/fact(n-r);
    else
    {
     printf("Please enter n>=r>=0");
     exit(0);
    }
     
}
int fact(int num)
{
    int i,fact =1;
    if(num==0)
     return 1;
    for(i=num;i>1;i--)
    {
        fact = fact*i;
    }
    return fact;
}