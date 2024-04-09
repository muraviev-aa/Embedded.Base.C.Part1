/*
 * Доказать тождество А->В =!A||B
 */
#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    printf("%s\t%s\t!A\t!A||B\tA->B\n", "A", "B");
    printf("0\t0\t1\t1\t1\n");
    printf("0\t1\t1\t1\t1\n");
    printf("1\t0\t0\t0\t0\n");
    printf("1\t1\t0\t1\t1\n");
    printf("Тождество доказано.");
    return 0;
}

