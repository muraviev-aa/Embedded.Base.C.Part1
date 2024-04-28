#include <stdio.h>

void print_num(int num)
{
    if (num < 10)
        printf("%d ", num);
    else
    {
        print_num(num % 10);
        print_num(num / 10);
    }
}

int main(void)
{
    int a;
    scanf("%d", &a);
    print_num(a);
    return 0;
}
