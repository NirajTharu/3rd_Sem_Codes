// Basic Array Operation
#include<iostream>
using namespace std;
int insertion(int [],int ); //Adding the elements in the array
int deletion(int [],int ); //Deleting the elements in the array
// int sorting(int [],); //Arranging the array items into ascending or descending order
int merging(int [],int []); //Merging is the process of adding two array into one
int display(int arr[],int n); // For displaying the array elements after the operation.

int main()
{
    int a[55];
    int n;
    cout<<"How many elements are there in the array?"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array elements after insertion:"<<display(a,n)<<endl;
    cout<<"Array elements after merging:"<<display(a,n)<<endl;

    return 0;
}
int display(int a[],int n)
{   cout<<"The array elements are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
        cout<<endl;
    }
    return 0;
}
int merging(int a[],int b[])
{
    int n,i;
    cout<<"Enter the elements of the first array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the elements of the second array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    return a[i]+b[i];
}
