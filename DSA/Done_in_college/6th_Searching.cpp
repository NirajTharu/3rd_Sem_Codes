#include<iostream>
using namespace std;
int main()
{
    int a[55]; //Declering the size of the array;
    int n; // For initializing the size of the array;
    int b; //For the searching variable;
    int temp;
    cout<<"Enter the size of the array don't exit the size 55:"<<endl;
    cin>>n;
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the elements you want to search?"<<endl;
    cin>>b;
    for(int i=0;i<n;i++)
    {
        if(b  == a[i])
        {
            // temp=1;
             cout<<"Your element is found!!"<<endl;
             break;
        }
        else
        {   // temp=0;  
             cout<<"Your element is not found!!"<<endl;
             break;
        }
    }
    // if(temp==1)
    // {
    //     cout<<"Found"<<endl;
    // }
    // else{
    //     cout<<"! Found"<<endl;
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<endl;
    // }
    return 0;
}