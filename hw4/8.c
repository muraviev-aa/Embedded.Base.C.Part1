#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int a, b, c, d, e, min;
    printf("Введите пять целых чисел разделенных пробелом\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    min = a < b ? a : b;
    min = min < c ? min : c;
    min = min < d ? min : d;
    min = min < e ? min : e;
    printf("Минимальное из введенных чисел: %d", min);
    return 0;
}