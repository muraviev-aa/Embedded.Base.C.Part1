#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, sum = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++)
        sum += (int) pow(i, 2);
    printf("%d", sum);
    return 0;
}