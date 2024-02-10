//Program to find the Factorial of a number.Number is entered by the user.
#include<stdio.h>
int fact(int);
int main()
{
    int a;
    printf("Enter the number whose factorial you want?\n");
    scanf("%d",&a);
    printf("The factorial of %d is %d\n",a,fact(a));
    return 0;
} 
int fact(int n)
{
    int factorial;
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return factorial=n* fact(n-1);
    }
}