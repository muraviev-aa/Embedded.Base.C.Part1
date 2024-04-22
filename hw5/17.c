#include <stdio.h>

int sumNum(int b)
{
    int sum = 0;
    while (b > 0)
    {
        sum += b % 10;
        b /= 10;
    }
    return sum;
}

int multiNum(int b)
{
    int multi = 1;
    while(b > 0)
    {
        multi *= b % 10;
        b /= 10;
    }
    return multi;
}

int main(void)
{
    int a, b;
    scanf("%d", &a);
    for (b = 10; b <= a; b++)
    {
        if(sumNum(b) == multiNum(b))
            printf("%d ", b);
    }
    return 0;
}
