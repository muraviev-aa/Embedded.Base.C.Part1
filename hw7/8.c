#include <stdio.h>

void func1(int a, int b)
{
    if(a <= b)
    {
        printf("%d ", a);
        func1(a + 1, b);
    }
}

void func2(int a, int b)
{
    if(a >= b)
    {
        printf("%d ", a);
        func2(a - 1, b);
    }
}

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    if(a < b)
        func1(a, b);
    else if(a > b)
        func2(a, b);
    else
        printf("%d", a);
}