
//Program to push in the stack
#include<iostream>
using namespace std;
int push(int [] ,int );
int main()
{
    int a; 
    int i;
    int stack[55];
    cout<<"Enter the number of elements of the stack?"<<endl;
    cin>>a;
    cout<<"Enter the elements of the stack:"<<endl;
    for(int i=0;i<a;i++)
    {
        cin>>stack[i];
    }
    push(stack,a);
return 0;
}
int push(int stack[],int n)
{
    int item;
    int a=n;
    if(a>=55)
    {
        cout<<"The  Stack is Full"<<endl;
    }
    else
    {
        cout<<"Enter the data you want to push:"<<endl;
        cin>>item;
        stack[a]=item;
        
    }
    cout<<"After push:"<<endl;
    for(int i=0;i<=a;i++)
    {
        cout<<stack[i]<<endl;
    }
    return 0;
}
    