#include <stdio.h>

void remove_Zeros(int arr[], int ln)
{

    for (int i = 0; i < ln; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] = 0;
        }
    }
}

int main()
{

    int size;

    printf("Enter The Aray Length: \n");
    scanf("%d", &size);

    int arr[size];

    printf("Enter The Elements: \n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    remove_Zeros(arr, size);

    printf("The Copied array is: \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d \n", arr[i]);
    }
    printf("\n");

    return 0;
}