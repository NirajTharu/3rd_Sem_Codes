#include<stdio.h>
#include<math.h>
#define max 5
int main()
{
    int i,deg;
    float deriv,poly[max];
    printf("Enter the degree of the polynomial:\n");
    scanf("%d",&deg);
    printf("Enter the coefficient of the polynomial:\n");
    {
        for(i=0;i<=deg;i++)
        {
            scanf("%d",&poly[i]);
        }
        deriv=derivative(poly,2.5,deg);
        printf("The Derivative of the funcion is:%f",deriv);
    }   
    float derivative(float poly[],float x,int deg)
    {
        float d;
        float h=0.01;
        d=(eval(poly,x+h,deg)-eval(poly,x-h,deg))/(2*h);
        return d;
    }
    float eval(float poly[],float x,int degree)
    {
        int i;
        float p;
        p=poly[0];
        for(i=0;i<=degree;i++)
        {
            p=p*x+poly[i];
        }
        return p;
    }
    return 0;
}