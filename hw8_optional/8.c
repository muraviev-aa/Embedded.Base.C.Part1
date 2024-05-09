#include <stdio.h>

enum
{
    SIZE_ARR = 12
};

int creat_array(int size_arr, int arr[]);
void revers_arr(int size_arr, int arr[]);
void print(int size_arr, int arr[]);

int main(void)
{
    int arr[SIZE_ARR];
    creat_array(SIZE_ARR, arr);
    for (int i = 0; i < 3; i++)
        revers_arr(SIZE_ARR / 3, arr + i * SIZE_ARR / 3);
    print(SIZE_ARR, arr);
    return 0;
}

int creat_array(int size_arr, int arr[])
{
    int i;
    for (i = 0; i < size_arr; i++)
        scanf("%d", &arr[i]);
    return i;
}

void revers_arr(int size_arr, int arr[])
{
    for (int i = 0, j = size_arr - 1; i < j; i++, j--)
    {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}

void print(int size_arr, int arr[])
{
    for (int i = 0; i < size_arr; i++)
        printf("%d ", arr[i]);
}
