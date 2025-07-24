#include <stdio.h>

void get_Subarray(int arr[], int ln)
{
    printf("\n");
    for (int i = 0; i < ln; i++)
    {
        int sub_arrayCount = 0;
        for (int j = i; j < ln; j++)
        {
            for (int k = i; k <= j; k++)
            {
                // Nothing to Here.
            }
            sub_arrayCount++;
        }
        printf("The Count of %dst pair  is: %d", i + 1, sub_arrayCount);
        printf("\n");
    }
}

void get_Element(int arr[], int ln)
{
    printf("Enter The Elements: \n");

    for (int i = 0; i < ln; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int main()
{
    int ln;

    printf("Enter The Array Length: \n");
    scanf("%d", &ln);

    int arr[ln];

    get_Element(arr, ln);

    get_Subarray(arr, ln);

    return 0;
}