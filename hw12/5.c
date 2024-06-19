#include <stdio.h>
#define SWAP(a, b) (a ^= b, b ^= a, a ^= b)

int main(void)
{
    int a = 2, b = 7;
    printf("a = %d, b = %d\n", a, b);
    SWAP(a, b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}