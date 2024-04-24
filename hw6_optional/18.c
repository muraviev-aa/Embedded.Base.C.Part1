#include <stdio.h>

int haveDigit(char ch)
{
    return ch >= '0' && ch <= '9';
}

int main(void)
{
    char text;
    int count = 0;
    while (1)
    {
        scanf("%c", &text);
        if (text == '.')
            break;
        if (haveDigit(text))
            count++;
    }
    printf("%d", count);
    return 0;
}
