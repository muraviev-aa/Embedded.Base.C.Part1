#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int a;
    printf("Введите целое положительное трехзначное число\n");
    scanf("%d", &a);
    printf("Максимальная цифра из введенного числа: ");
    if(a/100 > (a/10)%10 && a/100 > a%10)
        printf("%d", a/100);
    else if((a/10)%10 > a/100 && (a/10)%10 > a%10)
        printf("%d", (a/10)%10);
    else
        printf("%d", a%10);
    return 0;
}