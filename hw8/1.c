#include <stdio.h>
#define SIZE 5

int creatingAnArray(int n, int arr[]);

double arithmeticMeanOfAllElements(int n, const int arr[]);

int main(void)
{
    int arr[SIZE];
    creatingAnArray(SIZE, arr);
    printf("%.3f", arithmeticMeanOfAllElements(SIZE, arr));
    return 0;
}

int creatingAnArray(int n, int arr[])
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return i;
}

double arithmeticMeanOfAllElements(int n, const int arr[])
{
    int sumElem = 0;
    for (int i = 0; i < n; i++)
        sumElem += arr[i];
    return (double) sumElem / 5;
}