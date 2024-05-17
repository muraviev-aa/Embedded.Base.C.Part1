#include <stdio.h>
#define SIZE_ARR 12

int creat_array(int size_arr, int a[]);
int count_between(int from, int to, int size, int a[]);

int main(void)
{
    int arr[SIZE_ARR] = {0};
    creat_array(SIZE_ARR, arr);
    printf("%d", count_between(2, 89, SIZE_ARR, arr));
    return 0;
}

int creat_array(int size_arr, int a[])
{
    int i;
    for (i = 0; i < size_arr; i++)
        scanf("%d", &a[i]);
    return i;
}

int count_between(int from, int to, int size, int a[])
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] >= from && a[i] <= to)
            count++;
    }
    return count;
}