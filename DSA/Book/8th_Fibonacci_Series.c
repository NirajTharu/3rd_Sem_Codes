//A Program to calculate the nth number fibonacci series;
#include<stdio.h>
int fibo(int);
int main()
{
    int n;
    printf("Enter the position upto which you want to print the fibonacci series:\n");
    scanf("%d",&n);
    printf("The fibonacci series of %d position is:%d\n",n,fibo(n));
    return 0;
}
int fibo(int a)
{
    if(a==1||a==0)
    {
        return (a);
    }
    else
    {
        return (fibo(a-1)+fibo(a-2));
    }
}