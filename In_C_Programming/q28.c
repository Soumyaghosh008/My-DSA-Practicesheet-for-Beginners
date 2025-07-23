#include <stdio.h>

void sortinAscending(int arr[], int ln)
{

    for (int i = 0; i < ln - 1; i++)
    {
        for (int j = 0; j < ln - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] ^= arr[j + 1];
                arr[j + 1] ^= arr[j];
                arr[j] ^= arr[j + 1];
            }
        }
    }

    printf("Sorted Array in Ascensing Order is: ");

    for (int i = 0; i < ln; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void sortinDesending(int arr[], int ln)
{

    for (int i = 0; i < ln - 1; i++)
    {
        for (int j = 0; j < ln - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                arr[j] ^= arr[j + 1];
                arr[j + 1] ^= arr[j];
                arr[j] ^= arr[j + 1];
            }
        }
    }

    printf("Sorted Array in Decensing Order is: ");

    for (int i = 0; i < ln; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void getElement(int arr[], int ln)
{

    printf("Enter The Array Elements; ");

    for (int i = 0; i < ln; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int main()
{

    int ln;

    printf("Enter The Array Length: ");
    scanf("%d", &ln);

    int arr[ln];

    getElement(arr, ln);

    sortinAscending(arr, ln);
    sortinDesending(arr, ln);

    return 0;
}