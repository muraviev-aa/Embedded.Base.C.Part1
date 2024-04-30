#include <stdio.h>

void print_subsequence(int num, int count);

int main(void)
{
    int a;
    scanf("%d", &a);
    print_subsequence(a, 1);
    return 0;
}

void print_subsequence(int num, int count)
{
    for (int i = 1; i <= count; i++)
    {
        printf("%d ", count);
        num--;
        if (num == 0)
            return;
    }
    print_subsequence(num, count + 1);
}