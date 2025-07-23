#include <stdio.h>

void reverse_from_right(int arr[], int ln)
{
    for (int i = ln - 1; i > 0; i--)
    {
        arr[i] ^= arr[i - 1];
        arr[i - 1] ^= arr[i];
        arr[i] ^= arr[i - 1];
    }
}

void get_Element(int arr[], int ln)
{
    printf("Enter The Elements: \n");

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

    get_Element(arr, ln);
    reverse_from_right(arr, ln);

    printf("The Reversed Array is: \n");

    for (int i = 0; i < ln; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}