#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int a, season = 0;
    printf("Введите целое число от 1 до 12\n");
    scanf("%d", &a);
    if(a == 12 || a == 1 || a == 2)
        season = 1;
    else if(a == 3 || a == 4 || a == 5)
        season = 2;
    else if(a == 6 || a == 7 || a == 8)
        season = 3;
    else if(a == 9 || a == 10 || a == 11 )
        season = 4;
    else
        season = 5;

    switch(season)
    {
        case 1:
            printf("%s", "winter");
            break;
        case 2:
            printf("%s", "spring");
            break;
        case 3:
            printf("%s", "summer");
            break;
        case 4:
            printf("%s", "autumn");
            break;
        default:
            printf("ERROR");
            break;
    }
    return 0;
}