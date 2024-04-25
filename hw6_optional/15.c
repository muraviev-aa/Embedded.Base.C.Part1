#include <stdio.h>

int grow_up(int n);

int main(void)
{
    int a;
    scanf("%d", &a);
    if (grow_up(a) == 1)
        printf("YES");
    else
        printf("NO");
    return 0;
}

int grow_up(int n)
{
    int flag = 0, count = 0;
    while (n > 0)
    {
        count++;
        if (n % 10 > n / 10 % 10)
            flag++;
        n /= 10;
    }
    if (count == flag)
        return 1;
    else
        return 2;
}
