#include <stdio.h>

void get_Element(int arr[], int ln)
{

    printf("Enter Array Elements: ");

    for (int i = 0; i < ln; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void delete_Element(int arr[], int ln, int pos)
{

    for (int i = pos - 1; i < ln - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    ln--;

    printf("The Current Array is: ");

    for (int i = 0; i < ln; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{

    int ln, pos;

    printf("Enter The Array Length: ");
    scanf("%d", &ln);

    int arr[ln];

    get_Element(arr, ln);

    printf("Enter The Position: ");
    scanf("%d", &pos);

    delete_Element(arr, ln, pos);

    return 0;
}