#include <stdio.h>

char upCase(char a)
{
    return a >= 'a' && a <= 'z' ? (a - 32) : a;
}

int main(void)
{
    char input;
    while (1)
    {
        scanf("%c", &input);
        if (input == '.')
            break;
        printf("%c", upCase(input));
    }
    return 0;
}
