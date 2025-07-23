#include <stdio.h>

int get_Reverse_using_3rd(int arr[], int length)
{

    int temp[length];

    for (int i = 0; i < length; i++)
    {
        temp[i] = arr[length - 1 - i];
    }

    printf("The Reversed Version using 3rd Array is: \n");

    for (int i = 0; i < length; i++)
    {
        printf("%d \n", temp[i]);
    }

    return 0;
}

int get_Reverse_not_using_3rd(int arr[], int length)
{

    for (int i = 0; i < length / 2; i++)
    {
        arr[i] ^= arr[length - 1 - i];
        arr[length - 1 - i] ^= arr[i];
        arr[i] ^= arr[length - 1 - i];
    }

    printf("The Reversed Version not using Third Array is: \n");

    for (int i = 0; i < length; i++)
    {
        printf("%d \n", arr[i]);
    }

    return 0;
}

int main()
{

    int size;

    printf("Enter The Array Length: \n");
    scanf("%d", &size);

    int x[size];

    printf("Enter The Elements: \n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &x[i]);
    }

    get_Reverse_using_3rd(x, size);
    get_Reverse_not_using_3rd(x, size);

    return 0;
}