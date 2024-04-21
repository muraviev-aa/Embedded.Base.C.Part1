#include <stdio.h>

int main(void)
{
    int a, sum = 0;
    scanf("%d", &a);
    while(a > 0)
    {
        sum += a%10;
        a /= 10;
    }
    if(sum == 10)
        printf("%s", "YES");
    else
        printf("%s", "NO");
    return 0;
}