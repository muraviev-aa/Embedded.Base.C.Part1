#include <stdio.h>

int is_prime(int n)
{
    int flag = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            flag = 0;
    }
    if (n == 1 || n == 0)
        flag = 0;
    return flag;
}

int main(void)
{
    int a;
    scanf("%d", &a);
    if (is_prime(a))
        printf("YES");
    else
        printf("NO");
    return 0;
}
