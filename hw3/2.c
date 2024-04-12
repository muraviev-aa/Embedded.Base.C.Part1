#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    printf("Введите три целых числа через пробел\n");
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d+%d+%d=%d\n", a, b, c, a+b+c);
    printf("%d*%d*%d=%d\n", a, b, c, a*b*c);
    return 0;
}