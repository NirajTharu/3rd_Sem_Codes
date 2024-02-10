//Program to find the sum of first 10 natural Numbers using recursion.
#include<stdio.h>
int sum(int a);
int main()
{
    int x;
    printf("Enter any positve intiger number:");
    scanf("%d",&x);
    printf("The sum of first %d intigers = %d\n",x,sum(x));
    return 0;
}
int sum(int x)
{
    if(x==0)
    {
        return 0;
    }
    else 
    {
        return (x+sum(x-1));
    }
}