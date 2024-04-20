#include <stdio.h>

int main(void)
{
    int a, num = 0;
    scanf("%d", &a);
    while (a != 0)
    {
        a /= 10;
        num++;
    }
    if (num == 3)
        printf("%s\n", "YES");
    else
        printf("%s\n", "NO");
    return 0;
}