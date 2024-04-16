#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int a, b, c, d, e, max;
    printf("Введите пять целых чисел через пробел\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    max = a > b ? a : b;
    max = max > c ? max : c;
    max = max > d ? max : d;
    max = max > e ? max : e;
    printf("Наибольшеее из введенных чисел: %d", max);
    return 0;
}
