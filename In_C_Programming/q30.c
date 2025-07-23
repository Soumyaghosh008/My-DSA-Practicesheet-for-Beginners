#include <stdio.h>

void get_Pairs(int arr[], int ln)
{
    for (int i = 0; i < ln; i++)
    {
        for (int j = i + 1; j < ln; j++)
        {
            for (int k = i; k <= j; k++)
            {
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

void get_Element(int arr[], int ln)
{
    printf("Enter The Array Elements: \n");

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
    get_Pairs(arr, ln);

    return 0;
}