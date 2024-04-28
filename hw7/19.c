#include <stdio.h>

int countLetter()
{
    char ch;
    scanf("%ch", &ch);
    if (ch == '.')
        return 0;
    return (ch == 'a') + countLetter();
}

int main()
{
    printf("%d", countLetter());
    return 0;
}

