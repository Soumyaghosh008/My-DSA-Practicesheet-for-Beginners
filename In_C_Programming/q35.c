#include <stdio.h>

int get2ndMax(int max, int arr[], int ln){

    int secmax = arr[0];

    for (int i = 0; i < ln; i++)
    {
        if (arr[i] > secmax && arr[i] < max)
        {
            secmax = arr[i];
        }
    }
    
    return secmax;
}

int getMax(int arr[], int ln){

    int max = arr[0];

    for (int i = 0; i < ln; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int result = get2ndMax(max,arr,ln);
    
    return result;
}

int main(){

    int size;

    printf("Enter THe Array Length: \n");
    scanf("%d", &size);

    int arr[size];

    printf("Enter The Elements: \n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = getMax(arr,size);

    printf("The Second Max Element of the Array is: %d \n", result);
    
    return 0;
}