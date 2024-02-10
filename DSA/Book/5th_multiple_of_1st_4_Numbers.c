//Program to display first four multiple of a number using recursion.
#include<stdio.h>
void multi();
int main()
{
    int i;
    multi(10);
    return 0;
}
void multi(int n)
{
    if(n<10000)
    {
        multi(n*10);
        printf("%d\n",n);
    }
    // printf("%d\n",n);
}