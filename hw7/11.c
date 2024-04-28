#include <stdio.h>

int countNumber(int number)
{
    if (number == 0)
        return 0;
    else
        return (number & 1) + countNumber(number >> 1);
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", countNumber(num));
    return 0;
}

