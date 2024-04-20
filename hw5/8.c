#include <stdio.h>

int main(void)
{
    int a, flag = 0;
    scanf("%d", &a);
    while (a > 0)
    {
        if (a % 10 == 9)
            flag++;
        a /= 10;
    }
    flag == 1 ? printf("%s", "YES") : printf("%s", "NO");
    return 0;
}