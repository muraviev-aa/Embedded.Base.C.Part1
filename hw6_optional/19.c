#include <stdio.h>

int digit_to_num(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0';
    return 0;
}

int main()
{
    char text;
    int sum = 0;
    while (1)
    {
        scanf("%c", &text);
        if (text == '.')
            break;
        sum += digit_to_num(text);
    }
    printf("%d", sum);
    return 0;
}
