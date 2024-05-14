#include <stdio.h>
#define COUNT 20

int create_arr(int size_arr, int arr[]);
void print_arr(int size_arr, int arr[]);
void sort_array(int size, int a[]);

int main(void)
{
    int arr[COUNT] = {0};
    create_arr(COUNT, arr);
    sort_array(COUNT, arr);
    print_arr(COUNT, arr);
    return 0;
}

int create_arr(int size_arr, int arr[])
{
    int i;
    for (i = 0; i < size_arr; i++)
        scanf("%d", &arr[i]);
    return i;
}

void print_arr(int size_arr, int arr[])
{
    for (int i = 0; i < size_arr; i++)
        printf("%d ", arr[i]);
}

void sort_array(int size, int a[])
{
    int i = 0;
    int j = 0;
    int temp = 0;
    for (i = 0; i < size; i++)
    {
        for (j = i; j < size; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}