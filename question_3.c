//3. Write a function to check whether a given number is even or odd. Return 1 if the \
number is even, otherwise return 0. (TSRS)
#include<stdio.h>
#include<conio.h>
short check(int);
int main()
{
    int num;
    printf("Enter number to check even or odd:\n");
    scanf("%d",&num);
    check(num)?printf("%d is even number",num):printf("%d is odd number",num);
    getch();
    return 0;
}
short check(int a)
{
    return a%2 == 0 ? 1:0;
}