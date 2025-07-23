#include <stdio.h>

void get_Sorted_in_desending(int x[], int ln)
{

    for (int i = 0; i < ln; i++)
    {
        for (int j = ln - 1; j > i; j--)
        {
            if (x[i] < x[j])
            {
                x[i] ^= x[j];
                x[j] ^= x[i];
                x[i] ^= x[j];
            }
        }
    }

    printf("The Sorted Array in Ascending Order is: \n");

    for (int i = 0; i < ln; i++)
    {
        printf("%d ", x[i]);
    }

    printf("\n");
}

void get_Sorted_in_ascending(int x[], int ln)
{

    for (int i = 0; i < ln; i++)
    {
        for (int j = ln - 1; j > i; j--)
        {
            if (x[i] > x[j])
            {
                x[i] ^= x[j];
                x[j] ^= x[i];
                x[i] ^= x[j];
            }
        }
    }

    printf("The Sorted Array in Ascending Order is: \n");

    for (int i = 0; i < ln; i++)
    {
        printf("%d ", x[i]);
    }

    printf("\n");
}

void get_Element(int arr[], int ln)
{

    printf("Enter The Elements: \n");

    for (int i = 0; i < ln; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void main()
{

    int size;

    printf("Enter The Aray Length: \n");
    scanf("%d", &size);

    int arr[size];

    get_Element(arr, size);

    get_Sorted_in_ascending(arr, size);
    get_Sorted_in_desending(arr, size);
}