#include <stdio.h>
int count_Min(int arr[], int ln)
{

    int min = arr[0];

    for (int i = 0; i < ln; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
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

    int result = count_Min(arr, size);

    printf("The Max element of the Array is: %d \n", result);

    return 0;
}