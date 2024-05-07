#include <stdio.h>

void GetDigits(unsigned number, unsigned digit[]);
unsigned GetMaxNumber(unsigned number);

int main()
{
    long int num;
    scanf("%ld", &num);
    printf("%u\n", GetMaxNumber(num));
    return 0;
}

void GetDigits(unsigned number, unsigned digit[])
{
    if (number != 0)
    {
        digit[number % 10]++;
        GetDigits(number / 10, digit);
    }
}

unsigned GetMaxNumber(unsigned number)
{
    unsigned digit[10] = {0};
    unsigned i = sizeof(digit) / sizeof(*digit);
    unsigned result = 0;
    GetDigits(number, digit);

    while (i--)
    {
        while (digit[i]--)
        {
            result = result * 10 + i;
        }
    }
    return result;
}
