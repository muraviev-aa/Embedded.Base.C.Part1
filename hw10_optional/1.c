#include <stdio.h>

struct point
{
    unsigned int x: 5;
    unsigned int y: 3;
};

int main(void)
{
    struct point centr = {0, 3};
    printf("x = %d, y = %d\n", centr.x, centr.y);
    centr.x = 2;
    printf("x = %d, y = %d\n", centr.x, centr.y);
    return 0;
}