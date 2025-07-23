#include <stdio.h>

void get_Element(int arr[], int ln)
{

    printf("Enter Array Elements: ");

    for (int i = 0; i < ln; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void add_Element(int arr[], int ln, int pos, int key)
{

    ln++;

    for (int i = ln - 1; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = key;
}

int main()
{

    int ln, pos, key;

    printf("Enter The Array Length: ");
    scanf("%d", &ln);

    int arr[ln];

    get_Element(arr, ln);

    printf("Enter The Position: ");
    scanf("%d", &pos);

    printf("Enter The Key Value: ");
    scanf("%d", &key);

    add_Element(arr, ln, pos, key);

    printf("The Current Array is: ");

    for (int i = 0; i < ln; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}