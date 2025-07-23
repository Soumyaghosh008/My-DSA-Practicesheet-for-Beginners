#include <stdio.h>

void count_Values(int arr[], int ln)
{

    int zero = 0, pos = 0, neg = 0;

    for (int i = 0; i < ln; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] > 0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }

    printf("The Count of Positive Values is: %d", pos);
    printf("The Count of Negetive Values is: %d", neg);
    printf("The Count of Zero Values is: %d", zero);
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

    int size;

    printf("Enter The Aray Length: \n");
    scanf("%d", &size);

    int arr[size];

    get_Element(arr, size);
    count_Values(arr, size);

    return 0;
}