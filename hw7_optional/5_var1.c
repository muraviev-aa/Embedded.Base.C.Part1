#include <stdio.h>

void to_binary(int n)
{
    int r = n % 2;
    if (n >= 2)
        to_binary(n / 2);
    printf("%c", r == 0 ? '0' : '1');
}

int main(void)
{
    int a;
    scanf("%d", &a);
    to_binary(a);
}
