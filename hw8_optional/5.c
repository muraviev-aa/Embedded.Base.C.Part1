#include <stdio.h>
#define SIZE_ARR 10

int creatingArray(int sizeArr, int arr[]);

void sumPositiveElem(int sizeArr, const int arr[]);

int main(void)
{
    int arr[SIZE_ARR];
    creatingArray(SIZE_ARR, arr);
    sumPositiveElem(SIZE_ARR, arr);
    return 0;
}

int creatingArray(int sizeArr, int arr[])
{
    int i;
    for (i = 0; i < sizeArr; i++)
        scanf("%d", &arr[i]);
    return i;
}

void sumPositiveElem(int sizeArr, const int arr[])
{
    int sum = 0;
    for (int i = 0; i < sizeArr; i++)
    {
        if (arr[i] > 0)
            sum += arr[i];
    }
    printf("%d", sum);
}