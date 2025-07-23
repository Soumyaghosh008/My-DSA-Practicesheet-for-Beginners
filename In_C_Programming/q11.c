#include <stdio.h>

void get_Element(int arr[], int ln)
{

    printf("Enter The Elements: ");

    for (int i = 0; i < ln; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void get_Sorted(int arr[], int ln)
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

int main()
{

    int ln;

    printf("Enter The Array Length: ");
    scanf("%d", &ln);

    int arr[ln];

    get_Element(arr, ln);
    get_Sorted(arr, ln);

    printf("The Sorted Array is: ");

    for (int i = 0; i < ln; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}