#include <stdio.h>

void sort_Array(int arr[], int ln)
{

    for (int i = 0; i < ln; i++)
    {
        for (int j = ln - 1; j > i; j--)
        {

            if (arr[i] > arr[j])
            {
                arr[i] ^= arr[j];
                arr[j] ^= arr[i];
                arr[i] ^= arr[j];
            }
        }
    }
}

int Order_Search(int arr[], int ln, int target)
{

    sortArray(arr, ln);

    for (int i = 0; i < ln; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
        else if (arr[i] > target)
        {
            return -1;
        }
    }

    return -1;
}

int Unorder_Search(int arr[], int ln, int target)
{

    for (int i = 0; i < ln; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main()
{

    int size, target;

    printf("Enter THe Array Length: \n");
    scanf("%d", &size);

    int arr[size];

    printf("Enter The Elements: \n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter The Target: ");
    scanf("%d", &target);

    int result1 = Unorder_Search(arr, size, target);
    int result2 = Order_Search(arr, size, target);

    if (result1 != -1 && result2 != -1)
    {
        printf("Value Found in %d Position in Un-Ordered Linear Search \n", result1 + 1);
        printf("Value Found in %d Position in Ordered Linear Search \n", result2 + 1);
    }
    else
    {
        printf("Value not Found!");
    }

    return 0;
}