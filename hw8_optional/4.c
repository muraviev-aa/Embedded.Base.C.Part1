#include <stdio.h>
#define SIZE_ARR 10

void print_sum_two_max(int size_arr, int arr[]);

int main()
{
    int arr[SIZE_ARR];
    print_sum_two_max(SIZE_ARR, arr);
    return 0;
}

void print_sum_two_max(int size_arr, int arr[])
{
    int max1 = 0, max2 = 1;
    scanf("%d", &arr[0]);
    for (int i = 1; i < SIZE_ARR; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > arr[max1])
        {
            max2 = max1;
            max1 = i;
        }
        else if (arr[i] > arr[max2])
            max2 = i;
    }
    printf("%d\n", arr[max1] + arr[max2]);
}