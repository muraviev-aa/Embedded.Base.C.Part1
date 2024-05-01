#include <stdio.h>

void print_digits(int n);

int main(void)
{
    int num;
    scanf("%d", &num);
    print_digits(num);
    return 0;
}

void print_digits(int n)
{
    if (n < 10)
        printf("%d", n);
    else
    {
        print_digits(n / 10);
        printf(" %d", n % 10);
    }
}