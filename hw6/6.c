#include <stdio.h>
#include <math.h>

unsigned long long int numberOfGrains(int a);

int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%llu", numberOfGrains(a));
    return 0;
}

unsigned long long int numberOfGrains(int a)
{
    return (unsigned long long) pow(2, (a - 1));
}
