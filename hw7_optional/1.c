#include <stdio.h>

void printNum(int num)
{
    if (num > 1)
        printNum(num - 1);
    printf("%d ", num);
}

int main(void)
{
    int a;
    scanf("%d", &a);
    printNum(a);
    return 0;
}
