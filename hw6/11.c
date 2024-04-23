#include <stdio.h>

int nod(int a, int b);

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", nod(a, b));
    return 0;
}

int nod(int a, int b)
{
    int temp;
    while (b > 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
