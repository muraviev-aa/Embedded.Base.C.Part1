#include <stdio.h>

void how_many_multiples_any_numbers(int num);

int main()
{
    int n;
    scanf("%d", &n);
    how_many_multiples_any_numbers(n);
}

void how_many_multiples_any_numbers(int num)
{
    int a[8], i, j;
    for (i = 0; i < 8; i++)
        a[i] = 0;
    for (i = 2; i <= num; i++)
        for (j = 2; j < 10; j++)
            if (i % j == 0) a[j - 2] += 1;
    for (i = 0; i < 8; i++)
        printf("%d %d\n", i + 2, a[i]);
}
