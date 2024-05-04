#include <stdio.h>
#define SIZE_ARR 5

int creatingAnArray(int sizeArr, int arr[]);

double arithmeticMeanOfAllElements(int sizeArr, const int arr[]);

int main(void)
{
    int arr[SIZE_ARR];
    creatingAnArray(SIZE_ARR, arr);
    printf("%.3f", arithmeticMeanOfAllElements(SIZE_ARR, arr));
    return 0;
}

int creatingAnArray(int sizeArr, int arr[])
{
    int i;
    for (i = 0; i < sizeArr; i++)
        scanf("%d", &arr[i]);
    return i;
}

double arithmeticMeanOfAllElements(int sizeArr, const int arr[])
{
    int sumElem = 0;
    for (int i = 0; i < sizeArr; i++)
        sumElem += arr[i];
    return (double) sumElem / 5;
}