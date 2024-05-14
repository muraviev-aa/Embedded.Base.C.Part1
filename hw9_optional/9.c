#include <stdio.h>
#define SIZE_ARR 10

void swap_negmax_last(int size, int a[]);

int main(void)
{
    int arr[SIZE_ARR] = {79, 422, 162, -256, -273, 451, 380, 42, -11, 429};
    swap_negmax_last(SIZE_ARR, arr);
    return 0;
}

void swap_negmax_last(int size, int a[])
{
    int max = 0, tmp, pos;
    int flag;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > 0)
            flag = 0;
    }
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0 && (max == 0 || a[i] > max))
        {
            max = a[i];
            pos = i;
            flag = 1;
        }
    }
    if (flag == 1)
    {
        tmp = a[size - 1];
        a[size - 1] = max;
        a[pos] = tmp;
    }
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
}