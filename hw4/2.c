#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int a, b, c, max = 0;
    printf("Введите три целых числа через пробел\n");
    scanf("%d%d%d", &a, &b, &c);
    if(a > b && a > c)
        max = a;
    else if(b > a && b > c)
        max = b;
    else
        max = c;
    printf("Наиболее целое число из введенных: ");
    printf("%d", max);
    return 0;
}