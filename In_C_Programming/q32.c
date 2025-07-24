#include <stdio.h>

void get_Subarrayavg(int arr[], int ln)
{
    printf("\n");
    for (int i = 0; i < ln; i++)
    {
        for (int j = i + 1; j < ln; j++)
        {
            int sum = 0, avg = 0, length = 0;

            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }

            length = j - i + 1;
            avg = sum / length;

            printf("Subarray Average is: %d\n", avg);
        }
        printf("\n");
    }
}

void get_Subarraysum(int arr[], int ln)
{
    printf("\n");
    for (int i = 0; i < ln; i++)
    {
        for (int j = i + 1; j < ln; j++)
        {
            int sum = 0;

            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            printf("Sum is: %d\n", sum);
        }
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

    get_Subarraysum(arr, ln);
    get_Subarrayavg(arr, ln);

    return 0;
}