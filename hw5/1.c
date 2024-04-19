#include <stdio.h>
#include <math.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    if (a > 0 && a <= 100)
    {
        for (int i=1; i <= a; i++)
            printf("%d %d %d\n", i, (int)pow(i, 2), (int)pow(i, 3));
    }
    else
        printf("Incorrect number entered");
    return 0;
}
