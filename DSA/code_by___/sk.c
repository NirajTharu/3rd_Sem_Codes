#include<stdio.h>

//Function Declarations
void getinfo(int n, int Array[]);
void showinfo(int , int []);
int Insert(int , int []);
void Traverse(int, int []);
void Search (int , int[]);
int Delete (int, int[]);
void Sort (int, int[]);

//Body
int main ()
{
    int n, Array[20],c;
    char val;

    printf("Enter the no. of elements to be entered (max 20): ");
    scanf("%d", &n);

    getinfo(n, Array);
do {
    printf("choose the operation (assigned numbers) you desire to perform: \n");
    printf("1 for Inserting \n2 for Traversing \n3 for Searching \n4 for Sorting \n5 for Deleting\n");

    scanf("%d", &c);

    switch (c)
    {

case 1:
   n= Insert(n,Array);
   printf("After inserting: \n");
    break;

case 2:
    Traverse (n, Array);
    break;

case 3:
    Search (n, Array);
    break;

case 4:
    Sort (n, Array );
    break;

case 5:
  n=  Delete (n, Array);
break;

default :
    printf("Wrong input!\n");
    }
printf ("If you want any other operations, enter 'Y' or 'y' for further process.");
scanf (" %c",&val);
} while (val=='y' || val=='Y') ;
    return 0;
}


// Function definitions
void getinfo(int n, int Array[])
{
    printf("Enter the elements: ");
    for (int i=0 ; i<n; i++)
    {
        scanf("%d",&Array[i]);
    }
}

void showinfo(int n, int Array[])
{

    for (int i=0; i<n; i++)
    {
        printf("%d ",Array[i]);
    }
}

int Insert (int n, int Array[])
{
    int key,pos, j=n ;
        printf("Enter the element to be inserted:  ");
        scanf("%d", &key);
        printf("Enter the position where element is to be inserted: ");
        scanf("%d", &pos);

        while (j>=pos)
        {
            Array[j+1] = Array[j];
            j--;
        }
        Array[pos]=key;
        n++;
        showinfo(n,Array);
}

void Search (int n, int Array[])
{
    int x, flag=0;
    printf ("Enter the element to search for: ");
scanf("%d", &x) ;

for (int i=0; i<n; i++)
{
    if (x==Array[i])
    {
        printf("Element %d found at array position %d.\n ", x, i);
        flag=1;
    }
    }

    if (flag ==0)
        printf("Element not found!\n");
}

void Traverse (int n, int Array[])
{
    printf ("The array elements are :\n");

    for (int i=0; i<n; i++)
    {
        printf("Array[%d] = %d\n",i, Array[i]);
    }
}

void Sort (int n, int Array[])
{
    int temp;
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (Array[i]>Array[j])
            {
                temp=Array[i];
                Array[i]=Array[j];
                Array[j]=temp;
            }
        }
    }
    printf("After Sorting: \n");
    showinfo (n, Array);
}

int Delete (int n, int Array[])
{
    int x,j, flag=0;
    printf("Enter the element to be deleted: ");
    scanf("%d",&x);

    for (int i=0; i<n; i++)
    {
        if (x==Array[i])
        {
                flag =1;
            j=i;
            while (j<n)
            {
                Array[j]=Array[j+1];
                j++;
            }
            n--;
        }
    }
    if (flag==1)
     {
        printf("Element deleted successfully\nAfter deletion:\n");
    showinfo(n, Array);
    }
    else
        printf("Element does not exist\n");

    //    printf("After deletion: \n");
//        showinfo(n, Array);
return n;
}