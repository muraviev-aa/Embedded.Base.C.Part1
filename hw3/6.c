#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int a, sum = 0;
    printf("Введите трехзначное целое положительное число\n");
    scanf("%d", &a);
    sum += a/100;     // первая цифра числа
    sum += (a/10)%10; // вторая цифра числа
    sum += (a%10);    // третья цифра числа
    printf("Сумма цифр, входящих в число, равна: ");
    printf("%d", sum);
    return 0;
}
