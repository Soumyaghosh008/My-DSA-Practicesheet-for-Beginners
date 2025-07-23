#include <stdio.h>

void get_Element(int arr[])
{

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    get_Element(arr);

    return 0;
}