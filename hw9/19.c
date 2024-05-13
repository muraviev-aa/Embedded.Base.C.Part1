#include <stdio.h>
#define COUNT 5

int sum_diagonal(int SIZE, int a[SIZE][SIZE]);
void set_mass(int SIZE, int a[SIZE][SIZE]);

int main()
{
    int a[COUNT][COUNT];
    set_mass(COUNT, a);
    int average = (sum_diagonal(COUNT, a)) / COUNT;
    int count_max = 0;
    for (int i = 0; i < COUNT; i++)
    {
        for (int j = 0; j < COUNT; j++)
        {
            if (a[i][j] > average)
                count_max++;
        }
    }
    printf("%d", count_max);
    return 0;
}

int sum_diagonal(int SIZE, int a[SIZE][SIZE])
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
        sum += a[i][i];
    return sum;
}

void set_mass(int SIZE, int a[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            scanf("%d", &a[i][j]);
    }
}
