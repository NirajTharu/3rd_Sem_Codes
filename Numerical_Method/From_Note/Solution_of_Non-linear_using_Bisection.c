//Program for solving non-linear equation using bisection method;


#include<stdio.h>

#include<math.h>

#include<stdlib.h>

float f ( float x)

{

   float y;

   y= pow(x, 2)+x -2;

   return y;

}

int main()
{

   float x1, x2, x0, error=0.0001;

   int i=0;

   printf("Enter two initial guess:\n");

   scanf("%f%f", &x1, &x2);

   if (f(x1 )*f(x2 )>0)

   {

      printf("Wrong Input!!\n");

      exit(0);

   }

else

{

   do

      {

         x0=(x1+x2)/2;

         if(f(x0 )*f(x1 )>0)

                   x1=x0;

         else

                   x2=x0;

        i++;

      }while(fabs (f(x0))>error);

   }

printf("Root=%f\n", x0);

printf("Number of iteration=%d\n",i);

return 0;

}

