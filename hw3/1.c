#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int a, b, c;
    printf("Введите три целых числа через пробел\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("%d+%d+%d=%d", a, b, c, a+b+c);
    return 0;
}
