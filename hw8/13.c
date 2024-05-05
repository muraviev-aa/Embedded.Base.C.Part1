#include <stdio.h>
#define SIZE_ARR 10

int creatingAnArray(int sizeArr, int arr[]);

void searchSecondZero(int sizeArr, const int arr[]);

int main(void)
{
    int arr[SIZE_ARR];
    creatingAnArray(SIZE_ARR, arr);
    searchSecondZero(SIZE_ARR, arr);
    return 0;
}

int creatingAnArray(int sizeArr, int arr[])
{
    int i;
    for (i = 0; i < sizeArr; i++)
        scanf("%d", &arr[i]);
    return i;
}

void searchSecondZero(int sizeArr, const int arr[])
{
    for (int i = 0; i < SIZE_ARR; i++)
    {
        if (arr[i] / 10 % 10 == 0)
            printf("%d ", arr[i]);
    }
}