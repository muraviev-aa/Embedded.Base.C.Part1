#include <stdio.h>

int main(void)
{
    int a = 1, even = 0;
    while(scanf("%d", &a) == 1 && a != 0)
    {
        if(a%2 == 0)
            even++;
    }
    printf("%d", even);
    return 0;
}