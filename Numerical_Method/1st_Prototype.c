#include<stdio.h>
int main()
{
    // Decleratino of array to store the coefficients of the array.
    float poly[5];
    int deg; //Degree of the polynomial;
    printf("Enter the degree of the polynomial:\n");
    scanf("%d",&deg);
    printf("Enter the coefficients of the polynomial:\n");
    for(int i=0;i<=deg;i++)
    {
        scanf("%f",&poly[i]);
    }
    //initial guess
    x=1;
    //Start iteration
    while(eval(poly,x)!=0.001)
    {
        
    }
    printf("The root is:%f",x);
    float eval(float[],float)
    {
        
    }
    return 0;
}