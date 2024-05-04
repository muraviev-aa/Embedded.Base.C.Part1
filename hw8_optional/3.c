#include <stdio.h>
#define SIZE_ARR 10

int creatingArray(int sizeArr, int arr[]);

void findMaxNumAndPosFromArray(int sizeArr, const int arr[]);

void findMinNumAndPosFromArray(int sizeArr, const int arr[]);

int main(void)
{
    int arr[SIZE_ARR];
    creatingArray(SIZE_ARR, arr);
    findMaxNumAndPosFromArray(SIZE_ARR, arr);
    findMinNumAndPosFromArray(SIZE_ARR, arr);
    return 0;
}

int creatingArray(int sizeArr, int arr[])
{
    int i;
    for (i = 0; i < sizeArr; i++)
        scanf("%d", &arr[i]);
    return i;
}

void findMaxNumAndPosFromArray(int sizeArr, const int arr[])
{
    int max = arr[0], counterMax = 1;
    for (int i = 1; i < sizeArr; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            counterMax = i + 1;
        }
    }
    printf("%d %d ", counterMax, max);
}

void findMinNumAndPosFromArray(int sizeArr, const int arr[])
{
    int min = arr[0], counterMin = 1;
    for (int i = 1; i < sizeArr; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            counterMin = i + 1;
        }
    }
    printf("%d %d ", counterMin, min);
}