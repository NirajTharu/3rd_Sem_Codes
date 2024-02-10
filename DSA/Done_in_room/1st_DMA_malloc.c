//To demonstrate the use of dynamic memory allocation malloc();     
// This program finds the sum and average of all elements of the array.

#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int *ptr;
    int i,n,sum=0;
    float avg;
    printf("Enter the number of elements you want to store in the array:\n");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));//Dynaminc memory allocation;
    if(ptr==NULL)
    {
        printf("The amount of memory is not avilable.\n");
        return 0;
    }
    else
    {
        printf("Enter the elements:\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",ptr+i);
        }
        for(i=0;i<n;i++)
        {
            sum=sum+(*(ptr+i));//For finding the sum of array elements;
        }
        printf("The sum of %d elements of array is=%d\n",n,sum);
        avg=sum/n;
        printf("The avarage of %d number of the array is %f\n",n,avg);
    }
    return 0;
}