#include <stdio.h>
#define SIZE_ARR 5

int creatingArray(int sizeArr, int arr[]);

void findMinimumNumberFromArray(int sizeArr, const int arr[]);

int main(void)
{
    int arr[SIZE_ARR];
    creatingArray(SIZE_ARR, arr);
    findMinimumNumberFromArray(SIZE_ARR, arr);
    return 0;
}

int creatingArray(int sizeArr, int arr[])
{
    int i;
    for (i = 0; i < sizeArr; i++)
        scanf("%d", &arr[i]);
    return i;
}

void findMinimumNumberFromArray(int sizeArr, const int arr[])
{
    int min = arr[0];
    for (int i = 1; i < sizeArr; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    printf("%d", min);
}