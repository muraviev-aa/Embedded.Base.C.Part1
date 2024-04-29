#include <stdio.h>

int funcAkkerman(int m, int n);

int main(void)
{
    int m, n;
    scanf("%u%u", &m, &n);
    printf("%u", funcAkkerman(m, n));
    return 0;
}

int funcAkkerman(int m, int n)
{
    return (!m) ? n + 1 : (!n) ? funcAkkerman(m - 1, 1) : funcAkkerman(m - 1, funcAkkerman(m, n - 1));
}