#include <stdio.h>

int get_element(int arr[], int ln)
{

    printf("Enter The Elements: ");

    for (int i = 0; i < ln; i++)
    {
        scanf("%d", arr[i]);
    }

    return 0;
}

int get_EvenOdd(int arr[], int ln)
{

    int even = 0, odd = 0;

    for (int i = 0; i < ln; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("It have %d ", even, "Numbers");
    printf("It have %d ", odd, "Numbers");

    return 0;
}

int main()
{

    int size;

    printf("Enter The Array Size: ");
    scanf("%d", &size);

    int arr[size];

    get_element(arr, size);

    get_EvenOdd(arr, size);

    return 0;
}