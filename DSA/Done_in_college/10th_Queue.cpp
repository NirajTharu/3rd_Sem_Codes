// The operations of the Queue are insertion and deletion
//In Queue the insertion is done from the top of the array means the elements are added from the last element of the array.
// The operation Deletion is done from the ground of the array mens the elements are subtracted from the first element of the array.
// The Queue flow the FIFO  order -> First Come First Service 


// The insertion operation in the queue
//In the queue the data must be added to the last of the the stack before null character in the array.
#include<iostream>
using namespace std;
#define size 5 
void insertion();
int front=-1;
int rare=-1;
int Queue[size];
int main()
{    
    char ch;
    do
    {
    cout<<"Do You want to insert an item in the Queue?"<<endl;
    cin>>ch;
    insertion();
    cout<<"Display the items after insertion"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<Queue[i]<<endl;
    }
    } while (ch =='y'||ch =='Y');
   return 0;
}

void insertion()
{
    int item;
    if(rare==size-1)
    {
        cout<<"Queue is full"<<endl;
    }
    else
    {
        cout<<"Enter the item which you want to add:"<<endl;
        cin>>item;
        if(front==-1)
        {
            front++;
            rare++;
            Queue[rare]=item;
        }
        else
        {
            rare++;
            Queue[rare]=item;
        }
    }
}
// int insertion(int Queue[],int n)
// {
//     int item;
//         if(n>=34)
//     {
//         cout<<"The Queue is full!!"<<endl;
//         return 0;
    
//     else if(rare==-1)
//     {
//         cout<<"Enter the element you want to insert:"<<endl;
//         cin>>item;
//         front ++;
//         rare ++;
//     }
//     else
//     {
//         rare ++;
//         Queue[rare]=item;
//     }
//     }
// }




//     for(int i=0;i<n;i++)
//     {
//         cout<<Queue[i];
//     }
//     cout<<"The Elements of the queue after insertion are:"<<insertion()
//     return 0;
// }
// int insertion(int Queue[],int b)
// {
//     int item;
//     cout<<"Enter the item you want to for the insertion operation"<<endl;
//     cin>>item;
//     if(Queue==34)
//     {
//         cout<<"The Queue is Full and the data can not be added to the stack."<<endl;
//     }
//     else
//     {
//         cout<<"The Queue after insertion is:"<<endl;
//         return Queue[b]+=item;
//     }
//     Queue[b+1];
// }


