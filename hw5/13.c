#include <stdio.h>

int main(void)
{
    int a, even = 0, odd = 0;
    scanf("%d", &a);
    while(a > 0)
    {
        if(a%10%2 == 0)
            even++;
        else
            odd++;
        a /= 10;
    }
    printf("%d %d", even, odd);
    return 0;
}