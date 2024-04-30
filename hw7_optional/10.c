#include <stdio.h>

int is_prime(int n, int divider);

int main(void)
{
    int a;
    scanf("%d", &a);
    is_prime(a, 2) ? printf("YES") : printf("NO");
    return 0;
}

int is_prime(int n, int divider)
{
    if (n == divider)
        return 1;
    if (n > 1 && n % divider != 0)
        return is_prime(n, divider + 1);
    else
        return 0;
}