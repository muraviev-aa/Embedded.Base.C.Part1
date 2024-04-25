#include <stdio.h>

int main(void)
{
    int ch, a = 0;
    do
    {
        ch = getchar();
        if (ch == '(')
            a++;
        else if (ch == ')' && --a < 0)
            break;
    } while (ch != '.');

    if (a == 0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
