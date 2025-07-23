#include <stdio.h>

void get_element(int arr[], int ln)
{

    printf("Enter The Elements: ");

    for (int i = 0; i < ln; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int get_Avg(int arr[], int ln)
{

    int sum = 0;
    int avg = 0;

    for (int i = 0; i < ln; i++)
    {
        sum += arr[i];
    }

    avg = sum / ln;

    return avg;
}

int get_Sum(int arr[], int ln)
{

    int sum = 0;

    for (int i = 0; i < ln; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{

    int size;

    printf("Enter The Array Size: ");
    scanf("%d", &size);

    int arr[size];

    get_element(arr, size);

    int result = get_Sum(arr, size);
    int result2 = get_Avg(arr, size);

    printf("The Sum of the Elements is: %d \n", result);
    printf("The Average of the Elements is: %d \n", result2);

    return 0;
}