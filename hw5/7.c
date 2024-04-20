#include <stdio.h>

int main(void)
{
    int a, lastDigit, nextDigit;
    scanf("%d", &a);
    while (a > 0)
    {
        lastDigit = a % 10;
        nextDigit = a / 10;
        while (nextDigit > 0)
        {
            if (lastDigit == nextDigit % 10)
            {
                printf("%s", "YES");
                return 0;
            }
            nextDigit /= 10;
        }
        a /= 10;
    }
    printf("%s", "NO");
    return 0;
}