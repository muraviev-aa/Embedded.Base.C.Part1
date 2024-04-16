#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int X1, Y1, X2, Y2;
    double k, b;
    printf("Введите четыре целых числа через пробел (X1, Y1, X2, Y2)\n");
    scanf("%d%d%d%d", &X1, &Y1, &X2, &Y2);
    k = (double)(Y2 - Y1)/(X2 - X1);
    b = (double)(Y1 - k * X1);
    printf("Числа k и b из уравнения прямой: %.2f %.2f", k, b);
    return 0;
}
