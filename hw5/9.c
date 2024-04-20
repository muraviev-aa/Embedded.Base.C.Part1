#include <stdio.h>

int main(void)
{
    int a, num = 0, count = 0;
    #define TEST 1
    #if !TEST
        printf("Введите целое число\n");
    #endif
    scanf("%d", &a);
    while (a != 0)
    {
        num++;
        if (a % 10 % 2 == 0)
            count++;
        a /= 10;
    }
    num == count ? printf("%s", "YES") : printf("%s", "NO");
    return 0;
}
