#include <stdio.h>
#define SIZE_ARR 10

int creatingAnArray(int sizeArr, int arr[]);

void searchCopyPrintSecondZero(int sizeArr, const int arr[]);

int main(void)
{
    int arr[SIZE_ARR];
    creatingAnArray(SIZE_ARR, arr);
    searchCopyPrintSecondZero(SIZE_ARR, arr);
    return 0;
}

int creatingAnArray(int sizeArr, int arr[])
{
    int i;
    for (i = 0; i < sizeArr; i++)
        scanf("%d", &arr[i]);
    return i;
}

void searchCopyPrintSecondZero(int sizeArr, const int arr[])
{
    int countNum = 0, arrNum[10] = {0};
    for (int i = 0; i < sizeArr; i++)
    {
        if (arr[i] / 10 % 10 == 0)
        {
            countNum++;
            arrNum[countNum] = arr[i];
        }
    }
    for (int i = 1; i <= countNum; i++)
        printf("%d ", arrNum[i]);
}