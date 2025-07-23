#include <stdio.h>

int check_Sorting(int arr[], int ln)
{
    int flag = 0;

    for (int i = 0; i < ln - 1; i++)
    {
        if (arr[i] < arr[i + 1] || arr[i] == arr[i + 1])
        {
            flag = 1;
        }
        else
        {
            break;
        }
    }

    return flag;
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

    printf("Enter The array Length: ");
    scanf("%d", &ln);

    int arr[ln];

    get_Element(arr, ln);
    int ans = check_Sorting(arr, ln);

    if (ans == 0)
    {
        printf("Array is not Sorted in Ascending Order \n");
    }
    else
    {
        printf("Array is Sorted in Ascending Order \n");
    }

    return 0;
}