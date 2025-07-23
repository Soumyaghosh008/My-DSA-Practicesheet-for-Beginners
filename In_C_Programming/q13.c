#include <stdio.h>

void get_Merged(int arr[], int arr2[], int temp[], int ln)
{

    for (int i = 0; i < ln; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = 0; i < ln; i++)
    {
        temp[ln + i] = arr2[i];
    }
}

void get_Sorted(int temp[], int ln)
{

    int totalLN = ln + ln;

    for (int i = 0; i < totalLN - 1; i++)
    {
        for (int j = 0; j < totalLN - i - 1; j++)
        {
            if (temp[j] > temp[j + 1])
            {
                temp[j] ^= temp[j + 1];
                temp[j + 1] ^= temp[j];
                temp[j] ^= temp[j + 1];
            }
        }
    }
}

void get_Element(int arr[], int arr2[], int ln)
{

    printf("Enter The Elements of 1st Array: \n");

    for (int i = 0; i < ln; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter The Elements of 2nd Array: \n");

    for (int i = 0; i < ln; i++)
    {
        scanf("%d", &arr2[i]);
    }
}

int main()
{

    int size;

    printf("Enter The Aray Length: \n");
    scanf("%d", &size);

    int arr[size];
    int arr2[size];

    int temp[size + size];

    get_Element(arr, arr2, size);

    get_Merged(arr, arr2, temp, size);

    get_Sorted(temp, size);

    printf("The Merged & Sorted Array is: ");

    for (int i = 0; i < size + size; i++)
    {
        printf("%d ", temp[i]);
    }

    printf("\n");

    return 0;
}