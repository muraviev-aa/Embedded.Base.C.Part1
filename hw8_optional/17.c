#include <stdio.h>
#define SIZE_ARR 10

int creat_array(int size_arr, int arr[]);
void search_print_num(int size_arr, int arr[]);

int main(void)
{
    int arr[SIZE_ARR];
    creat_array(SIZE_ARR, arr);
    search_print_num(SIZE_ARR, arr);
    return 0;
}

int creat_array(int size_arr, int arr[])
{
    int i;
    for (i = 0; i < size_arr; i++)
        scanf("%d", &arr[i]);
    return i;
}

void search_print_num(int size_arr, int arr[])
{
    for(int i = 0; i < size_arr; i++)
    {
        int count = 0;
        for (int j = 0; j < size_arr; j++)
            if (i != j && arr[i] == arr[j])
                count++;
        if (count == 0)
            printf("%d ", arr[i]);
    }
}
