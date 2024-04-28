#include <stdio.h>

void get_bin(int n)
{
    if (n > 1)
        get_bin(n / 2);
    printf("%d", n % 2);
}

int main()
{
    int n;
    scanf("%d", &n);
    get_bin(n);
    return 0;
}

