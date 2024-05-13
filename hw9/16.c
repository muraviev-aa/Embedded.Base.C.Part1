#include <stdio.h>
#define COUNT 3

int from_letter_number(char str[]);

int main(void)
{
    char str[COUNT];
    scanf("%s", str);
    int count = from_letter_number(str) + (str[1] - '0');
    count % 2 == 0 ? printf("BLACK") : printf("WHITE");
    return 0;
}

int from_letter_number(char str[])
{
    int letter = 0;
    switch (str[0])
    {
        case 'A':
            letter = 1;
            break;
        case 'B':
            letter = 2;
            break;
        case 'C':
            letter = 3;
            break;
        case 'D':
            letter = 4;
            break;
        case 'E':
            letter = 5;
            break;
        case 'F':
            letter = 6;
            break;
        case 'G':
            letter = 7;
            break;
        case 'H':
            letter = 8;
            break;
    }
    return letter;
}