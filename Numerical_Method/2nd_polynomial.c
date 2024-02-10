#include<stdio.h>
float eval(float [],float,int);
int main()
{
    // Decleratino of array to store the coefficients of the array.
    float poly[5],x;
    int deg,i; //Degree of the polynomial;
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
   /* while(eval(poly,x)!=0.001)
    {
        
    }*/
    
    printf("The root is:%f\n",eval(poly[i],2,deg));
    
    return 0;
}
float eval(float poly[],float x, int deg)
    {
       int i;
       float p;
       p=poly[0];
       for (i=0;i<=deg;i++)
       {
         p=p*x+poly[i];
       } 
       return p;
    }