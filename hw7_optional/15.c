#include <stdio.h>

int max_value(int max);

int main(void)
{
    printf("%d", max_value(0));
    return 0;
}

int max_value(int max)
{
    int num;
    scanf("%d", &num);
    if (num == 0)
        return max;
    if ((max == 0) || (num > max))
        max = num;
    return max_value(max);
}