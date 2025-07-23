#include <stdio.h>

void get_Element(int arr[], int ln)
{

    printf("Enter Array Elements: ");

    for (int i = 0; i < ln; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void update_Element(int arr[], int ln, int pos, int key)
{
    arr[pos - 1] = key;

    printf("The Current Array is: ");

    for (int i = 0; i < ln; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
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

    update_Element(arr, ln, pos, key);

    return 0;
}