#include <stdio.h>

int main(void) {
    int a, count = 0, flag = 0;
    #define TEST 1
    #if !TEST
        printf("Введите целое число\n");
    #endif
    scanf("%d", &a);
    while (a > 0)
    {
        count++;
        if (a % 10 > a / 10 % 10)
            flag++;
        a /= 10;
    }
    count == flag ? printf("%s", "YES") : printf("%s", "NO");
    return 0;
}