#include <stdio.h>
#define SIZE_ARR 12
#define OFFSET_ARR 4

int creatingAnArray(int sizeArr, int arr[]);

void printArray(int numSizeArr, int arr[]);

void shiftRightByFourElements(int numSizeArr, int numOffset, int arr[]);

int main(void)
{
    int arr[SIZE_ARR];
    creatingAnArray(SIZE_ARR, arr);
    shiftRightByFourElements(SIZE_ARR, OFFSET_ARR, arr);
    printArray(SIZE_ARR, arr);
    return 0;
}

int creatingAnArray(int numSizeArr, int arr[])
{
    int i;
    for (i = 0; i < numSizeArr; i++)
        scanf("%d", &arr[i]);
    return i;
}

void printArray(int numSizeArr, int arr[])
{
    for (int i = 0; i < numSizeArr; i++)
        printf("%d ", arr[i]);
}

void shiftRightByFourElements(int numSizeArr, int numOffset, int arr[])
{
    while (numOffset)
    {
        int tmp = arr[numSizeArr - 1];
        for (int i = numSizeArr - 1; i > 0; i--)
            arr[i] = arr[i - 1];
        arr[0] = tmp;
        numOffset--;
    }
}

