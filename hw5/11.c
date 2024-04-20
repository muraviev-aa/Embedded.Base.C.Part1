#include <stdio.h>

int main(void)
{
    int a, num = 0;
    #define TEST 1
    #if !TEST
        printf("Введите целое неотрицательное число\n");
    #endif
    scanf("%d", &a);
    while (a > 0)
    {
        num = num * 10 + a % 10;
        a /= 10;
    }
    printf("%d", num);
    return 0;
}