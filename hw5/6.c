#include <stdio.h>

int main(void)
{
    int a, flag = 0;
    scanf("%d", &a);
    while (a > 0)
    {
        if (a % 10 == a / 10 % 10)
            flag++;
        a /= 10;
    }
    flag > 0 ? printf("%s", "YES") : printf("%s", "NO");
    return 0;
}