#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++)
        printf("%d ", (int) pow(i, 2));
    return 0;
}