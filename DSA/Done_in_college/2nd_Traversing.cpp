#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[66];
    cout<<"How many elements are there in the array (Do not exceed the size 66):"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The elements of the array are below:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
        cout<<endl;
    }
    cout<<endl;
    return 0;
}