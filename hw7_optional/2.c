#include <stdio.h>

int sumNum(int num)
{
    return (num == 1) ? 1 : num + sumNum(num - 1);
}

int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%d", sumNum(a));
    return 0;
}
