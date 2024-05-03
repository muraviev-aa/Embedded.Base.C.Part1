#include <stdio.h>

#define SIZE 5

int creatingAnArray(int arr[]);

double arithmeticMeanOfAllElements(int arr[]);

int main(void)
{
    int arr[SIZE];
    creatingAnArray(arr);
    printf("%.3f", arithmeticMeanOfAllElements(arr));
    return 0;
}

int creatingAnArray(int arr[])
{
    int i;
    for (i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);
    return i;
}

double arithmeticMeanOfAllElements(int arr[])
{
    int sumElem = 0;
    for (int i = 0; i < SIZE; i++)
        sumElem += arr[i];
    return (double) sumElem / 5;
}