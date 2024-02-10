#include<iostream>
using namespace std;
int insert(int a[],int n);
int main()
{
    int a[55];
    int n;
    cout<<"Enter the number of elements in the array(Do not exceed the size 55):"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    insert(a,n);
    return 0;
}
int insert(int a[],int n)
{
    int capacity=55;
    int q;
    cout<<"Which elements you want to insert?"<<endl;
    cin>>q;
    if(n>=capacity)
    cout<<"Exceed array size"<<endl;
    else
    {
        a[n]=q;
        n++;
    }
    cout<<"After insertion the elements are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<endl;
    return 0;
}