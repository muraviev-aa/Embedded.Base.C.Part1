#include <stdio.h>
#define SIZE_ARR 10

int creatingAnArray(int sizeArr, int arr[]);

void printArray(int sizeArr, int arr[]);

void shiftRightElements(int sizeArr, int arr[]);

int main(void)
{
    int arr[SIZE_ARR];
    creatingAnArray(SIZE_ARR, arr);
    shiftRightElements(SIZE_ARR, arr);
    printArray(SIZE_ARR, arr);
    return 0;
}

int creatingAnArray(int sizeArr, int arr[])
{
    int i;
    for (i = 0; i < sizeArr; i++)
        scanf("%d", &arr[i]);
    return i;
}

void printArray(int sizeArr, int arr[])
{
    for (int i = 0; i < sizeArr; i++)
        printf("%d ", arr[i]);
}

void shiftRightElements(int sizeArr, int arr[])
{
    int tmp = arr[sizeArr - 1];
    for (int i = sizeArr - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = tmp;
}

