#include <stdio.h>

int power(int n, int p);

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", power(a, b));
    return 0;
}

int power(int n, int p)
{
    int result = 1;
    for (int i = 1; i <= p; i++)
    {
        result *= n;
    }
    return result;
}
