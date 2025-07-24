#include <stdio.h>
#include <limits.h> // Bellow comented thins you ca accessed via this library function.
// They return values based on typical X86 or X64 systems.

// INT_MAX	=>  Maximum value of int
// INT_MIN  =>  Minimum value of int
// LONG_MAX  =>  Max of long
// LONG_MIN	 =>  Min of long
// CHAR_MAX	 =>  Max of char

int get_Min_Subarray_Element(int arr[], int ln, int min)
{
    printf("\n");

    min = INT_MAX;

    for (int i = 0; i < ln; i++)
    {
        for (int j = i + 1; j < ln; j++)
        {
            for (int k = i; k <= j; k++)
            {
                if (arr[k] < min)
                {
                    min = arr[k];
                }
            }
        }
    }

    return min;
}

int get_Max_Subarray_Element(int arr[], int ln, int max)
{
    printf("\n");

    max = INT_MIN;

    for (int i = 0; i < ln; i++)
    {
        for (int j = i + 1; j < ln; j++)
        {
            for (int k = i; k <= j; k++)
            {
                if (arr[k] > max)
                {
                    max = arr[k];
                }
            }
        }
    }

    return max;
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
    int min = 0, max = 0;

    get_Element(arr, ln);

    int ans1 = get_Min_Subarray_Element(arr, ln, min);
    int ans2 = get_Max_Subarray_Element(arr, ln, max);

    printf("The Minimum element is: %d\n", min);
    printf("The Maximum element is: %d\n", max);

    return 0;
}