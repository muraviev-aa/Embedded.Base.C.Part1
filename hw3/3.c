#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int a, b;
    printf("Введите два целых числа через пробел\n");
    scanf("%d%d", &a, &b);
    printf("%d", a-b);
    return 0;
}