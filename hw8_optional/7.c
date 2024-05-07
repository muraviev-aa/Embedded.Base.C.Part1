#include <stdio.h>
enum
{
    SIZE_ARR = 10
};

int creatArray(int sizeArr, int arr[]);
void reverseArr(int sizeArr, int arr[]);
void print(int sizeArr, int arr[]);

int main(void)
{
    int arr[SIZE_ARR];
    creatArray(SIZE_ARR, arr);
    for (int i = 0; i < 2; i++)
        reverseArr(SIZE_ARR / 2, arr + i * SIZE_ARR / 2);
    print(SIZE_ARR, arr);
    return 0;
}

int creatArray(int sizeArr, int arr[])
{
    int i;
    for (i = 0; i < sizeArr; i++)
        scanf("%d", &arr[i]);
    return i;
}

void reverseArr(int sizeArr, int arr[])
{
    for (int i = 0, j = sizeArr - 1; i < j; i++, j--)
    {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}

void print(int sizeArr, int arr[])
{
    for (int i = 0; i < sizeArr; i++)
        printf("%d ", arr[i]);
}

