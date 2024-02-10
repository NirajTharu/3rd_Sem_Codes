#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;
    int arr[n];
    printf("Enter how many elements are in the array:\n");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
    scanf("%d",arr[i]);
    }
    //? What if i don't know the size of array. ? Can i dinamically allocate memory in this case? 
    return 0;
} // 
//Just because array size should be declere first before use.