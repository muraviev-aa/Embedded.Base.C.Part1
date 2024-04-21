#include <stdio.h>

int main(void)
{
    int a = 1, count = 0;
    while (scanf("%d", &a) == 1 && a != 0)
        count++;
    printf("%d", count);
}