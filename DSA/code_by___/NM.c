#include <stdio.h>
int search(int array[], int n);
int sort(int array[], int n);
int traverse(int array[], int n);
int insert(int array[], int n, int capacity);
int delete(int array[], int n);
int display(int array[], int n);
int main()
{
    int array[100], i;
    int n, capacity = 100;
    int choice, find;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("What operation do you want to perform ?\n1.Sort\n2.Search\n3.Insert element\n4.Delete element\n5.Traversing\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        sort(array, n);
        break;

    case 2:
        search(array, n);
        break;

    case 3:
        insert(array, n, capacity);
        break;

    case 4:
        delete(array, n);
        break;

    case 5:
        traverse(array, n);
        break;

    default:
        printf("Invalid Choice!! \n");
        break;
    }

    return 0;
}

int search(int array[], int n)
{
    int find, i;
    printf("Enter the element to find: ");
    scanf("%d", &find);
    for (i = 0; i < n; i++)
    {
        if (find == array[i])
        {
            printf("Your element is found!");
            return 0;
        }
    }
    printf("Element not found.\n");
    return 0;
}

int sort(int array[], int n)
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
                if (array[i] > array[j])
                {
                    temp = array[j];
                    array[j] = array[i];
                    array[i] = temp;
                }
            }
        }
        printf("The sorted elements are : \n");

        display(array, n);
        return 0;
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (array[i] < array[j])
                {
                    temp = array[j];
                    array[j] = array[i];
                    array[i] = temp;
                }
            }
        }
        printf("The sorted elements are : \n");

        display(array, n);
        return 0;
    }
}

int traverse(int array[], int n)
{
    display(array, n);
    return 0;
}

int insert(int array[], int n, int capacity)
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
        array[i + 1] = array[i];
    }

    array[position] = element;
    n += 1;

    printf("The array after insertion is :\n");
    display(array, n);
    return 0;
}

int delete(int array[], int n)
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
        array[i] = array[i + 1];
    }

    n -= 1;

    printf("The array after insertion is :\n");
    display(array, n);
    printf("\n");
    return 0;
}

int display(int array[], int n)
{
    printf("The array elements are : \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}