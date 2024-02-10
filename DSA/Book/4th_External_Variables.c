//Demonstation of External Variables
#include<stdio.h>
void extfun();//Function Decleration
int num=10;//External Variable Decleration
int main()
{
    extfun();//Function call
    printf("\n");
    return 0;
}
void extfun()
{
    extern int num; //External variable Decleration
    num=num+50;
    printf("%d",num);
}