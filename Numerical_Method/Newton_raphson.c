#include<stdio.h>
#include<math.h>
#define max 5
float eval(float poly[],float x,int deg);
float derivative(float[],float ,int);
int main()
{
    // Decleratino of array to store the coefficients of the array.
    float poly[max],x,deriv;
    int a,b;
    int deg,i; //Degree of the polynomial;
    printf("Enter the degree of the polynomial:\n");
    scanf("%d",&deg);
    printf("Enter the coefficients of the polynomial:\n");
    for(int i=0;i<=deg;i++)
    {
        scanf("%f",&poly[i]);
    }   
    deriv=derivative(poly,2.5,deg);
    printf("The derivative of the function is:%f\n",deriv);
    //initial guess
    // x=1;
    //Start iteration
    // while(eval(poly,x)!=0.001)
    // {
        
    // }
    printf("The root is:%f\n",x);
   
    return 0;
}
 float derivative(float poly[],float x,int deg)
    {
        float d;
        float h=0.01;
        d=(eval(poly,x+h,deg) - eval(poly,x-h,deg))/(2*h);
        return d;
    }
    float eval(float poly[],float x,int deg)
    {
        int i;
        float p;
        p=poly[0];
        for(int i=1;i<=deg;i++)
        {
            p=p*x+poly[i];
        }
        return p;
    }