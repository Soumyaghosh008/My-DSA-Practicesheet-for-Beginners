#include <stdio.h>

int check_Palindrome(int arr[], int temp[], int ln)
{
    for (int i = 0; i < ln; i++)
    {

        if (arr[i] != temp[i])
        {

            return -1;
        }
    }

    return 1;
}

void reverse_Array(int temp[], int ln)
{
    for (int i = 0; i < ln / 2; i++)
    {
        temp[i] ^= temp[ln - 1 - i];
        temp[ln - 1 - i] ^= temp[i];
        temp[i] ^= temp[ln - 1 - i];
    }
}

void get_Element(int arr[], int temp[], int ln)
{
    printf("Enter The Array Element: \n");

    for (int i = 0; i < ln; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < ln; i++)
    {
        temp[i] = arr[i];
    }
}

int main()
{
    int ln;

    printf("Enter The Array Length: ");
    scanf("%d", &ln);

    int arr[ln], temp[ln];

    get_Element(arr, temp, ln);
    reverse_Array(temp, ln);
    int ans = check_Palindrome(arr, temp, ln);

    if (ans == -1)
    {

        printf("This array is not a a Plindrome \n");
    }
    else
    {
        printf("This array is a Palindrome \n");
    }

    return 0;
}