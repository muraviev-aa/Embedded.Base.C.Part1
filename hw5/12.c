#include <stdio.h>

int main(void) {
    int a, max = 0, min, temp;
    #define TEST 1
    #if !TEST
        printf("Введите целое неотрицательное число\n");
    #endif
    scanf("%d", &a);
    min = a % 10;
    while (a != 0)
    {
        temp = a % 10;
        if (temp >= max)
            max = temp;
        else if(temp <= min)
            min = temp;
        a = a / 10;
    }
    printf("%d %d", min, max);
    return 0;
}