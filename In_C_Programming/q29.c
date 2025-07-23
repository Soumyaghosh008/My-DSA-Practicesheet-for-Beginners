#include <stdio.h>

int Iterativesearch(int arr[], int ln, int key)
{
    int mid = 0, startP = 0, endP = ln - 1;

    while (startP <= endP)
    {
        mid = startP + (endP - startP) / 2;

        if (key > arr[mid])
        {
            startP = mid + 1;
        }
        else if (key < arr[mid])
        {
            endP = mid - 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}

int Recursivesearch(int arr[], int ln, int key, int startP, int endP)
{
    if (startP <= endP)
    {
        int mid = startP + (endP - startP) / 2;

        if (key > arr[mid])
        {
            return Recursivesearch(arr, ln, key, mid + 1, endP);
        }
        else if (key < arr[mid])
        {
            return Recursivesearch(arr, ln, key, startP, mid - 1);
        }
        else
        {
            return mid;
        }
    }

    return -1;
}

void getSorted(int arr[], int ln)
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
}

void getElement(int arr[], int ln)
{
    printf("Enter The Array Elements: ");
    for (int i = 0; i < ln; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int main()
{
    int ln, key;

    printf("Enter The Array Length: ");
    scanf("%d", &ln);

    int arr[ln];

    getElement(arr, ln);

    printf("Enter The Target Value: ");
    scanf("%d", &key);

    getSorted(arr, ln);

    int result1 = Iterativesearch(arr, ln, key);
    int result2 = Recursivesearch(arr, ln, key, 0, ln - 1);

    if (result1 != -1)
        printf("Element found on %d Position using Iterative Approach \n", result1);
    else
        printf("Element not Found using Iterative Approach! \n");

    if (result2 != -1)
        printf("Element found on %d Position using Recursive Approach \n", result2);
    else
        printf("Element not Found using Recursive Approach! \n");

    return 0;
}
