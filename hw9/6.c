#include <stdio.h>
#define COUNT 5

int is_two_same(int size, int a[]);

int main(void)
{
    int arr[COUNT] = {1, 1, 3, 4, 5};
    printf("%d", is_two_same(COUNT, arr));
    return 0;
}

int is_two_same(int size, int a[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
                return 1;
        }

    }
    return 0;
}
