#include <stdio.h>

void printOddNumbers(void);

int main()
{
    printOddNumbers();
    return 0;
}

void printOddNumbers(void)
{
    int a;
    scanf("%d", &a);
    if (a == 0)
        return;
    if (a % 2 == -1 || a % 2 == 1)
        printf("%d ", a);
    printOddNumbers();
}