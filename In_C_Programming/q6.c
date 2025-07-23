#include <stdio.h>
int count_Max(int arr[], int ln)
{

    int max = arr[0];

    for (int i = 0; i < ln; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{

    int size;

    printf("Enter THe Array Length: \n");
    scanf("%d", &size);

    int arr[size];

    printf("Enter The Elements: \n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = count_Max(arr, size);

    printf("The Max element of the Array is: %d \n", result);

    return 0;
}