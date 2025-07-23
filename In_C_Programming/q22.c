#include <stdio.h>

void cal_Element_frequency(int arr[], int ln)
{

    for (int i = 0; i < ln; i++)
    {
        int count = 1;

        for (int j = ln - 1; j > i; j--)
        {

            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        printf("Position %d Value comes %d times \n", i + 1, count);
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

    printf("Enter The Array Length: ");
    scanf("%d", &ln);

    int arr[ln];

    get_Element(arr, ln);

    cal_Element_frequency(arr, ln);

    return 0;
}