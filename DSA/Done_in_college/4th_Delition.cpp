#include<iostream>
using namespace std;
int main()
{
    int a[35];
    int position;
    int n;
    cout<<"How many elements are there in the array Don't exit the size 35:"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the position of the array you want to delete:"<<endl;
    cin>>position;
    cout<<"Array after delition:"<<endl;
    for(int i=position-1; i<n-1;i++)
    {
        a[i]=a[i+1];
    }
     for(int i=0;i<n-1;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}