#include<iostream>
using namespace std;
int main()
{
    int n[25],n1[25]; //Declaring variables to access the array.
    int a[55];// For initializing the array elements number.
    // cout<<"Enter the total elements of both array:"<<endl;
    // for(int i=0;i<a;i++)
    // {
    //     cin>>a[i];
    // }
    cout<<"How many elements are there in first array?"<<endl;
    cin>>n;
    cout<<"Enter the elements of the first array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>n[i];
    }
    cout<<"How many elements are there in the second array?"<<endl;
    cin>>n1;
    cout<<"Enter the elements of the second array:"<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>n1;
    }
    cout<<"The Array elements After merging first and second array:"<<endl;
    for(int i=0;i<(n+n1);i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}