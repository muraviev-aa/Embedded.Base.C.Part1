#include <stdio.h>

void reversString(void)
{
    char c;
    if ((c = getchar()) != '.')
        reversString();
    if (c != '.')
        putchar(c);
}

int main(void)
{
    reversString();
    return 0;
}
