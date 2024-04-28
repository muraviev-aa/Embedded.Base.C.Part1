#include <stdio.h>

void printNum(int num)
{
    printf("%d ", num);
    if (num > 1)
        printNum(num - 1);
}

int main(void)
{
    int a;
    scanf("%d", &a);
    printNum(a);
    return 0;
}
