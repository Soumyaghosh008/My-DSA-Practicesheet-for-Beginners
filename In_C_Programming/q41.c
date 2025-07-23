#include <stdio.h>

void array_Union(int arr[], int arr2[], int arr_ln, int arr2_ln)
{
    int total_ln = arr_ln + arr2_ln;
    int temp[total_ln];

    for (int i = 0; i < arr_ln; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = 0; i < arr2_ln; i++)
    {
        temp[arr2_ln + i] = arr2[i];
    }

    for (int i = 0; i < total_ln; i++)
    {
        for (int j = i + 1; i < total_ln; i++)
        {
            if (temp[i] == temp[i + 1])
            {
                for (int k = j; k < total_ln - 1; k++)
                {
                    temp[k] = temp[k + 1];
                }
                j--;
                total_ln--;
            }
        }
    }

    printf("The Union of This Array is: \n");

    for (int i = 0; i < total_ln; i++)
    {
        printf("%d ", temp[i]);
    }

    printf("\n");
}

void get_Element(int arr[], int arr2[], int arr_ln, int arr2_ln)
{
    printf("Enter the Elements of First Array: \n");

    for (int i = 0; i < arr_ln; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the Elements of Second Array: \n");

    for (int i = 0; i < arr2_ln; i++)
    {
        scanf("%d", &arr2[i]);
    }
}

int main()
{
    int arr_ln, arr2_ln;

    printf("Enter The Length of First Array: ");
    scanf("%d", &arr_ln);

    printf("Enter The Length of Second Array: ");
    scanf("%d", &arr2_ln);

    int arr[arr_ln], arr2[arr2_ln];

    get_Element(arr, arr2, arr_ln, arr2_ln);
    array_Union(arr, arr2, arr_ln, arr2_ln);

    return 0;
}