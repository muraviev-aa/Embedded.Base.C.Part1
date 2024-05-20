#include <stdio.h>
#define COUNT 100

void print_digit(const char s[]);

int main()
{
    char number[COUNT];
    scanf("%99[^\n]", number);
    print_digit(number);
    return 0;
}

void print_digit(const char s[])
{
    int result[20] = {0};
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            result[s[i] - '0']++;
    }
    for (int i = 0; i < 20; i++)
    {
        if (result[i] > 0)
            printf("%d %d\n", i, result[i]);
    }
}