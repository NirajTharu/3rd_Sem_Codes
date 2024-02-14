//Pop operation in the stack
#include<iostream>
using namespace std;
int pop(int [],int);
int main()
{
    int n,i;
    int stack[22];
    cout<<"How many items are in the stack?"<<endl;
    cin>>n;
    cout<<"Enter the elements of the stack:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>stack[i];
    }
    cout<<"After the pop in the stack:"<<endl;
    pop(stack,n);
    return 0;
}
int pop(int stack[],int a)
{
    int item;
    int n=a;
    if(stack==NULL)
    {
        cout<<"The stack is empty!!"<<endl;
    }
    else
    {
        stack[a]=item;
    }
    for(int i=0;i<a;i++)
    {
    cout<<stack[i]<<endl;
    }
    return 0;
}