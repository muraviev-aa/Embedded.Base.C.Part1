#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int a, b;
    printf("Введите два целых числа\n");
    scanf("%d%d", &a, &b);
    printf("Введенные числа в порядке возрастания: ");
    if(a>b)
        printf("%d %d", b, a);
    else
        printf("%d %d", a, b);
    return 0;
}