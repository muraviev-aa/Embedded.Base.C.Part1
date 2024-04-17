#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int a, b, c;
    printf("Введите три целых числа (длины сторон треугольника)\n");
    scanf("%d%d%d", &a, &b, &c);
    if(a + b > c && a + c > b && b + c > a)
        printf("%s", "YES");
    else
        printf("%s", "NO");
    return 0;
}
