#include <stdio.h>

void printOddNumbers(void)
{
    int a;
    while (scanf("%d", &a) == 1 && a != 0)
    {
        if (a % 2 != 0)
            printf("%d ", a);
    }
}

int main()
{
    printOddNumbers();
    return 0;
}