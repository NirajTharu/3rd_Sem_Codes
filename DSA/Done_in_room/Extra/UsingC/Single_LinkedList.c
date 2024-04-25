//Program for creating a single linked list;
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=malloc(sizeof(struct node));
    head->data=77;
    head->link=NULL;
    head->link =current;
    // for(int i=0;i<2;i++)
    // {
    //     printf("%d\n",head->data[i]);
    // }
//    printf("%d\n",head->data); 
//    printf("%d\n",current->data); 

    current =malloc(sizeof(struct node));
    current->data=44;
    current ->link=NULL;
    
    head->link->link=current; 
    return 0;
}