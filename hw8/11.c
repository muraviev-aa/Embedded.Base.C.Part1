#include <stdio.h>
#define SIZE_ARR 10

int creatingAnArray(int sizeArr, int arr[]);

void BubbleSortByLastDigit(int sizeArr, int arr[]);

void PrintArray(int sizeArr, int arr[]);

int main()
{
    int arr[SIZE_ARR];
    creatingAnArray(SIZE_ARR, arr);
    BubbleSortByLastDigit(SIZE_ARR, arr);
    PrintArray(SIZE_ARR, arr);
    return 0;
}

int creatingAnArray(int sizeArr, int arr[])
{
    int i;
    for (i = 0; i < sizeArr; i++)
        scanf("%d", &arr[i]);
    return i;
}

void PrintArray(int sizeArr, int arr[])
{
    for (int i = 0; i < sizeArr; i++)
    {
        printf("%d ", arr[i]);
    }
}

void BubbleSortByLastDigit(int sizeArr, int arr[])
{
    int i, tmp, flag;
    do
    {
        flag = 0;
        for (i = 1; i < sizeArr; i++)
        {
            if (arr[i] % 10 < arr[i - 1] % 10)
            {
                tmp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = tmp;
                flag = 1;
            }
        }
    } while (flag);
}
