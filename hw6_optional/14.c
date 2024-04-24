#include <stdio.h>

int evenSum(int a);

int main(void)
{
    int a;
    scanf("%d", &a);
    evenSum(a) ? printf("YES") : printf("NO");
    return 0;
}

int evenSum(int a)
{
    int sum = 0;
    for (sum = 0; a > 0; a /= 10)
        sum += a % 10;
    return (sum % 2 == 0);
}
