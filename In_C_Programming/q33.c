#include <stdio.h>
#include <limits.h> // Bellow comented thins you ca accessed via this library function.
// They return values based on typical X86 or X64 systems.

// INT_MAX	=>  Maximum value of int
// INT_MIN  =>  Minimum value of int
// LONG_MAX  =>  Max of long
// LONG_MIN	 =>  Min of long
// CHAR_MAX	 =>  Max of char

void get_Min_Subarray_Element(int arr[], int ln)
{
    printf("\n");

    int min = INT_MAX;

    for (int i = 0; i < ln; i++)
    {
        for (int j = i + 1; j < ln; j++)
        {
            min = INT_MAX;

            for (int k = i; k <= j; k++)
            {
                if (arr[k] < min)
                {
                    min = arr[k];
                }
            }

            printf("The Minimum Subarray Element is: %d\n", min);
        }
    }
}

void get_Max_Subarray_Element(int arr[], int ln)
{
    printf("\n");

    int max = INT_MIN;

    for (int i = 0; i < ln; i++)
    {
        for (int j = i + 1; j < ln; j++)
        {
            max = INT_MIN;

            for (int k = i; k <= j; k++)
            {
                if (arr[k] > max)
                {
                    max = arr[k];
                }
            }

            printf("The MAximum Subarray Element is: %d\n", max);
        }
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

    get_Min_Subarray_Element(arr, ln);
    get_Max_Subarray_Element(arr, ln);

    return 0;
}