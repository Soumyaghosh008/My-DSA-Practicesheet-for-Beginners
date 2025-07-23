#include <stdio.h>

void get_Element(int arr[], int ln)
{

    printf("Enter Array Elements: ");

    for (int i = 0; i < ln; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int get_Max(int arr[], int ln)
{
    int max = arr[0];

    for (int i = 1; i < ln; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int get_Min(int arr[], int ln)
{
    int min = arr[0];

    for (int i = 1; i < ln; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{

    int ln;

    printf("Enter The Array Length: ");
    scanf("%d", &ln);

    int arr[ln];

    get_Element(arr, ln);

    int big = get_Max(arr, ln);
    int small = get_Min(arr, ln);

    printf("The Difference is: %d \n", big - small);

    return 0;
}