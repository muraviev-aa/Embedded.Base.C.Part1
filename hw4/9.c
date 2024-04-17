#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int a, b, c;
    printf("Введите три целых числа через пробел\n");
    scanf("%d%d%d", &a, &b, &c);
    if(a < b && a < c)
        printf("YES");
    else
        printf("NO");
    return 0;
}
