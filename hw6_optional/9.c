#include <stdio.h>

int factorial(int a);

int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%d", factorial(a));
    return 0;
}

int factorial(int a)
{
    int factorial = 1;
    for (int i = 1; i <= a; i++)
        factorial *= i;
    return factorial;
}
