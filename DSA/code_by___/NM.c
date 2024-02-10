#include <stdio.h>
int search(int arry[], int n);
int sort(int arry[], int n);
int traverse(int arry[], int n);
int inrt(int arry[], int n, int capacity);
int del(int arry[], int n);
int display(int arry[], int n);
int main()
{
    int arry[100], i;
    int n, capacity = 100;
    int choice, find;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }

    printf("What operation do you want to perform ?\n1.Sort\n2.Search\n3.Insert element\n4.Delete element\n5.Traversing\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        sort(arry, n);
        break;

    case 2:
        search(arry, n);
        break;

    case 3:
        inrt(arry, n, capacity);
        break;

    case 4:
        del(arry, n);
        break;

    case 5:
        traverse(arry, n);
        break;

    default:
        printf("Please choose from the list \n");
        break;
    }

    return 0;
}

int search(int arry[], int n)
{
    int find, i;
    printf("Enter the elemetn to find: ");
    scanf("%d", &find);
    for (i = 0; i < n; i++)
    {
        if (find == arry[i])
        {
            printf("Your element is found!");
            return 0;
        }
    }
    printf("Element not found.\n");
    return 0;
}

int sort(int arry[], int n)
{
    int temp;
    int value;
    printf("Choose one:\n");
    printf("1.Ascending Order\n2.Descending Order\n");
    scanf("%d", &value);
    if (value == 1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arry[i] > arry[j])
                {
                    temp = arry[j];
                    arry[j] = arry[i];
                    arry[i] = temp;
                }
            }
        }
        printf("The sorted elements are : \n");

        display(arry, n);
        return 0;
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arry[i] < arry[j])
                {
                    temp = arry[j];
                    arry[j] = arry[i];
                    arry[i] = temp;
                }
            }
        }
        printf("The sorted elements are : \n");

        display(arry, n);
        return 0;
    }
}

int traverse(int arry[], int n)
{
    display(arry, n);
    return 0;
}

int inrt(int arry[], int n, int capacity)
{
    int element, position;
    printf("Enter the index in which you want to add the element\n");
    scanf("%d", &position);
    printf("Enter the element\n");
    scanf("%d", &element);

    if (n >= capacity)
    {
        printf("The array is full and new element can't be added");
    }

    for (int i = n - 1; i >= position; i--)
    {
        arry[i + 1] = arry[i];
    }

    arry[position] = element;
    n += 1;

    printf("The arrray after insertion is :\n");
    display(arry, n);
    return 0;
}

int del(int arry[], int n)
{
    int index;
    printf("Enter the position in which you want to delete the element\n");
    scanf("%d", &index);

    if (index < 0)
    {
        printf("Enter a index between 0-%d",n-1);
    }

    for (int i = index; i <= n - 1; i++)
    {
        arry[i] = arry[i + 1];
    }

    n -= 1;

    printf("The arrray after insertion is :\n");
    display(arry, n);
    return 0;
}

int display(int arry[], int n)
{
    printf("The array elements are : \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arry[i]);
    }
    return 0;
}