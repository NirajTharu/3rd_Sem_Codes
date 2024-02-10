#include<stdio.h>
#include<math.h>
#define max 5
float eval(float[],float ,int);
int main()
{
    //Decleration of the array to store the coefficients
    float poly[max],x,a,b ;
    int i,deg;//degree of polynomial;
    printf("Enter the degree of the polynomial:");
    scanf("%d",&deg);
    printf("Enter the cofficient of the polynomial from left to right:");
    for(i=0;i<=deg;i++)
    {
        scanf("%f",&poly[i]);      
    }
    //initial guess
    a=100;
    b=-100;
    x=(a+b)/2;
    printf("\n a\t\tb\t\tx\t\tf(x)");
    printf("\n%f\t%f\t%f\t%f",a,b,x,eval(poly,x,deg));
    // start iterations
    while(fabs(eval(poly,x,deg))>0.001)
    {
    if(eval(poly,a,deg)*eval(poly,x,deg)<0)
    b=x;
    else
    a=x;
    x=(a+b)/2;
    printf("\n%f\t%f\t%f\t%f\n",a,b,x,eval(poly,x,deg));
}
    printf("\nThe root of the function is:%f\n",x);
}
float eval(float poly[],float x,int deg)
{
    int i;
    float p;
    p=poly[0];
    for(i=1;i<=deg;i++)
    {
        p=p*x+poly[i];
    }
    return p;
}