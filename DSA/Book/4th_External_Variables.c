//Demonstation of External Variables
#include<stdio.h>
#include<math.h>
void extfun();//Function Decleration
int num;//External Variable Decleration
int main()
{
    extern int num=10;//External Varibale Decleration
    printf("%d\n",num);
    return 0;
}
void extfun()
{
    extern int num; //External variable Decleration
    num=num+50;
    printf("%d",num);
}