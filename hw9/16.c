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
    return str[0]-'A'+1;
}