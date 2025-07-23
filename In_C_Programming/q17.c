#include <stdio.h>

void get_Element(int arr[], int ln)
{

    printf("Enter Array Elements: ");

    for (int i = 0; i < ln; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void print_Even_position_Elements(int arr[], int ln)
{
    printf("The Mormal Array is: \n");

    for (int i = 0; i < ln; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("The Even Positioned Array is: \n");

    for (int i = 1; i < ln; i += 2)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{

    int ln;

    printf("Enter The Array Length: ");
    scanf("%d", &ln);

    int arr[ln];

    get_Element(arr, ln);

    print_Even_position_Elements(arr, ln);

    return 0;
}