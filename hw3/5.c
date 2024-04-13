#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int a;
    printf("Введите трехзначное целое положительное число\n");
    scanf("%d", &a);
    printf("Произведение цифр, входящих в число, равно: ");
    printf("%d", a/100 * ((a/10)%10) * (a%10));
    return 0;
}