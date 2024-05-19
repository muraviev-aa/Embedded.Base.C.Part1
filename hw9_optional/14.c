#include <stdio.h>
#define SIZE_ARR 12

int sum_between_ab(int from, int to, int size, int a[])
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                for (int k = j; k < size - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                size--;
                j--;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (a[i] >= from && a[i] <= to)
            sum += a[i];
    }
    return sum;
}

int main(void)
{
    int arr[SIZE_ARR] = {60, 50, 89, 71, 6, 40, 61, 75, 53, 64, 79, 97};
    printf("%d", sum_between_ab(50, 53, SIZE_ARR, arr));
    return 0;
}