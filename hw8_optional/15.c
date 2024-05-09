#include <stdio.h>
#define SIZE_ARR 10

int creating_array(int size_arr, int arr[]);
void find_print_num(int size_arr, const int arr[]);

int main(void)
{
    int arr[SIZE_ARR];
    creating_array(SIZE_ARR, arr);
    find_print_num(SIZE_ARR, arr);
}

int creating_array(int size_arr, int arr[])
{
    int i;
    for (i = 0; i < size_arr; i++)
        scanf("%d", &arr[i]);
    return i;
}

void find_print_num(int size_arr, const int arr[])
{
    int arr_pos[SIZE_ARR] = {0};
    int arr_neg[SIZE_ARR] = {0};
    for (int i = 0; i < size_arr; i++)
    {
        if (arr[i] != 0)
        {
            if (arr[i] > 0)
                arr_pos[i] = arr[i];
            else
                arr_neg[i] = arr[i];
        } else
        {
            arr_neg[i] = arr[i];
        }
    }
    for (int i = 0; i < size_arr; i++)
    {
        if (arr_pos[i] != 0)
            printf("%d ", arr_pos[i]);
    }

    for (int i = 0; i < size_arr; i++)
    {
        if (arr_neg[i] != 0)
            printf("%d ", arr_neg[i]);
    }
}
