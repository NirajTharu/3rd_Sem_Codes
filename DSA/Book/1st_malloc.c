//To demonstate the use of dynamic memory allocation function using malloc().This programs find the sum of all elements of the array.
#include<stdio.h>
#include<stdlib.h>
// #define NULL 0
int main()
{
    int *ptr;
    int i,n,sum=0;
    float avg;
    printf("Enter the numbers of elements you want to store in the array:\n");
    scanf("%d",&n);
    ptr=(int *) malloc(n*sizeof(int));//Dynamic memory allocation
    if(ptr==NULL)//Checking if the request is granted or not
    {
        printf("The requested amount of the memory is not avilable\n");
        return 0;
    }
    else
    {
        printf("Enter the elements\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",ptr+i);
        }
        for(i=0;i<n;i++)
        {
            sum=sum+(*(ptr+i));//Finding the sum of the array elements.
        }
        printf("Sum of %d elements of array is:%d\n",n,sum);
        avg=sum/n;//For finding the average
        printf("The average of %d numbers of the array is %f\n",n, avg);
    }
    return 0;
}