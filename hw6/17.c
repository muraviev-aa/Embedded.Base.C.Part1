#include <stdio.h>

int is_happy_number(int n);

int main(void)
{
    int a;
    scanf("%d", &a);
    if (is_happy_number(a) == 1)
        printf("YES");
    else
        printf("NO");
    return 0;
}

int is_happy_number(int n)
{
    int sumNum = 0, multiNum = 1;
    while (n > 0)
    {
        sumNum += n % 10;
        multiNum *= n % 10;
        n /= 10;
    }
    if (sumNum == multiNum)
        return 1;
    else
        return 2;
}
