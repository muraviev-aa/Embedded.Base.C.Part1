#include <stdio.h>

enum
{
    ARRAY_SIZE = 1000
};

int missing_item(int size, const int a[]);
int scan_array(int size_a, int a[]);

int main(void)
{
    int input_array[ARRAY_SIZE];
    int n = scan_array(ARRAY_SIZE, input_array);
    printf("%d\n", missing_item(n, input_array));
    return 0;
}


int missing_item(int size, const int a[])
{
    int min = a[0];
    int max = a[0];
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += a[i];
        if (a[i] < min)
            min = a[i];
        if (a[i] > max)
            max = a[i];
    }
    float expected_sum = (float) 0.5 * (max + min) * (max - min + 1);
    return (int) expected_sum - sum;
}

int scan_array(int size_a, int a[])
{
    int i = 0;
    int num;
    while (i < size_a)
    {
        scanf("%d", &num);
        if (num == 0)
            break;
        a[i] = num;
        i++;
    }
    return i;
}