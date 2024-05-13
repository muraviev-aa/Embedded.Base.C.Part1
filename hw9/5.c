#include <stdio.h>
#define COUNT 5

int find_max_array(int size, int a[]);

int main(void)
{
    int arr[COUNT] = {100, 20, 5, 4, 305};
    printf("%d\n", find_max_array(COUNT, arr));
    return 0;
}

int find_max_array(int size, int a[])
{
    int max = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}
