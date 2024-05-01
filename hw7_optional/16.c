#include <stdio.h>

int is2pow(int n);

int main(void)
{
    int num;
    scanf("%d", &num);
    is2pow(num) ? printf("YES") : printf("NO");
    return 0;
}

int is2pow(int n)
{
    if (n == 1)
        return 1;
    else if (n % 2 == 1 || n == 0)
        return 0;
    else
        return is2pow(n / 2);
}