#include <stdio.h>
#define SIZE_ARR 12

int create_array(int sizeArr, int arr[]);

void print_arithmetic_mean(int sizeArr, int arr[]);

int main(void)
{
    int arr[SIZE_ARR];
    create_array(SIZE_ARR, arr);
    print_arithmetic_mean(SIZE_ARR, arr);
    return 0;
}

int create_array(int sizeArr, int arr[])
{
    int i;
    for (i = 0; i < sizeArr; i++)
        scanf("%d", &arr[i]);
    return i;
}

void print_arithmetic_mean(int sizeArr, int arr[])
{
    int sum = 0;
    for(int i = 0; i < sizeArr; i++)
        sum += arr[i];
    printf("%.2f", (double) sum / sizeArr);
}