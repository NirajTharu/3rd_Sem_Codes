#include<iostream>
using namespace std;
int  main()
{
    int a[44]; // for storing the array elements
    int n; // for no. of array elements
    int p; // for choosing the order
    int temp;
    cout<<"How many elements are there in the array?,please don't exit the size 44"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //sorting
    printf("press 1 for sorting in ascending order\npress 2 for descending order:\n");
    scanf("%d",&p);
    if(p==1)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                }
            }
        }
    }
        else
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]<a[j])
                {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                }
            }
        }

     printf("The elements after Sorting:\n");
        for(int i=0;i<n;i++)
        {
            printf("%d\n",a[i]);
        }
    return 0;
}