#include <stdio.h>
#define SIZE_ARR 10

int creatingArray(int size_arr, int a[]);
void change_max_min(int size, int a[]);

int main(void)
{
    int arr[SIZE_ARR] = {0};
    creatingArray(SIZE_ARR, arr);
    change_max_min(SIZE_ARR, arr);
    return 0;
}

int creatingArray(int size_arr, int a[])
{
    int i;
    for (i = 0; i < size_arr; i++)
        scanf("%d", &a[i]);
    return i;
}

void change_max_min(int size, int a[])
{
    int tmp;
    int pos_max = 0;
    int pos_min = 0;
    int max_number = a[0];
    int min_number = a[0];
    for (int i = 0; i < size; i++)
    {
        if (max_number < a[i])
        {
            max_number = a[i];
            pos_max = i;
        }
        if (min_number > a[i])
        {
            min_number = a[i];
            pos_min = i;
        }
    }
    tmp = a[pos_min];
    a[pos_min] = a[pos_max];
    a[pos_max] = tmp;
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
}
