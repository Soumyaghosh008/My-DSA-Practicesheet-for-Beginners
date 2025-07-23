#include <stdio.h>

int copy_Elements(int arr[], int temp[], int length)
{

    for (int i = 0; i < length; i++)
    {
        temp[i] = arr[i];
    }

    printf("The Copied Version is: \n");

    for (int i = 0; i < length; i++)
    {
        printf("%d \n", temp[i]);
    }

    return 0;
}

int main()
{

    int size;

    printf("Enter The Array Length: \n");
    scanf("%d", &size);

    int x[size];
    int y[size];

    printf("Enter The Elements: \n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &x[i]);
    }

    copy_Elements(x, y, size);

    return 0;
}