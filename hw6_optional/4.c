#include <stdio.h>
#include <math.h>

int calcResult(int a)
{
    if (a < 2 && a >= -2)
        return (int) pow(a, 2);
    else if (a >= 2)
        return (int) pow(a, 2) + 4 * a + 5;
    else
        return 4;
}

int main(void)
{
    int a = 1, b, max = 0;

    while (a != 0)
    {
        scanf("%d", &a);
        b = calcResult(a);
        if (b > max)
            max = b;
    }
    printf("%d", max);
    return 0;
}
