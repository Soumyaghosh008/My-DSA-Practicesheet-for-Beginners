#include <stdio.h>
#include <stdlib.h>

int search_Interpolation(int arr[], int ln, int key)
{
    // Here low is the starting index of arr[].
    // Here high is the ending index of arr[].
    // Here key is the target value.

    int diff = abs(arr[0] - arr[1]);

    int low = 0, high = ln - 1;

    for (int i = ln - 1; i > 0; i--)
    {
        if ((arr[i] - arr[i - 1]) != diff)
        {
            printf("Invalid Operation for Un-Uniformed Array \n");
            return -1;
        }
    }

    int pos = (low + ((key - arr[low]) * (high - low))) / (arr[high] - arr[low]);

    if (pos > ln)
    {
        return -1;
    }

    return pos;
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

    int ln, key;

    printf("Enter Array Length: ");
    scanf("%d", &ln);

    printf("Enter The Target Element: ");
    scanf("%d", &key);

    int arr[ln];

    get_Element(arr, ln);
    int ans = search_Interpolation(arr, ln, key);

    if (ans != -1)
    {
        printf("The Value Found on %d Position \n", ans + 1);
    }
    else
    {
        printf("Value not Found! \n");
    }

    return 0;
}