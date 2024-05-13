#include <stdio.h>
#define COUNT 20

void sort_even_odd(int n, int a[]);
void print_arr(int n, int a[]);

int main(void)
{
    int arr[COUNT] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11,
                      10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    sort_even_odd(COUNT, arr);
    print_arr(COUNT, arr);
    return 0;
}

void sort_even_odd(int n, int a[])
{
    int tmp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            tmp = a[j];
            if (tmp % 2 != 0 && a[j + 1] % 2 == 0)
            {
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

void print_arr(int n, int a[])
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
