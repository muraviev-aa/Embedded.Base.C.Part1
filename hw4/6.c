#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a, b;
    printf("Введите два целых числа\n");
    scanf("%d%d", &a, &b);
    printf("Результат сравнения: ");
    if(a > b)
        printf("%s", "Above");
    else if(a < b)
        printf("%s", "Less");
    else
        printf("Equal");
    return 0;
}