#include <stdio.h>
#define SIZE_ARR 10

int creating_array(int size_arr, int arr[]);
void PrintArray(int size_arr, int arr[]);
void bubble_sort_ascend(int size_arr, int arr[]);
void bubble_sort_descend(int size_arr, int arr[]);

int main(void)
{
    int arr[SIZE_ARR];
    creating_array(SIZE_ARR, arr);
    bubble_sort_ascend(SIZE_ARR, arr);
    bubble_sort_descend(SIZE_ARR, arr);
    PrintArray(SIZE_ARR, arr);
    return 0;
}

int creating_array(int size_arr, int arr[])
{
    int i;
    for (i = 0; i < size_arr; i++)
        scanf("%d", &arr[i]);
    return i;
}

void PrintArray(int size_arr, int arr[])
{
    for (int i = 0; i < size_arr; i++)
    {
        printf("%d ", arr[i]);
    }
}

void bubble_sort_ascend(int size_arr, int arr[])
{
    int i, tmp, flag;
    do
    {
        flag = 0;
        for (i = 1; i < size_arr / 2; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                tmp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = tmp;
                flag = 1;
            }
        }
    } while (flag);
}

void bubble_sort_descend(int size_arr, int arr[])
{
    int i, tmp, flag;
    do
    {
        flag = 0;
        for (i = size_arr / 2 + 1; i < size_arr; i++)
        {
            if (arr[i] > arr[i - 1])
            {
                tmp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = tmp;
                flag = 1;
            }
        }
    } while (flag);
}

