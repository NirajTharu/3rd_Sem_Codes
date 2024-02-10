//Static Storage Class
#include<stdio.h>
void example();
int main()
{
    int i;
    for(i=0;i<=3;i++)
    {
        example();
    }
    return 0;
}
void example()
{
    static int x=10;//Local Static Variable
    x=x+10;//Local Static variable
    printf("%d\n",x);
}