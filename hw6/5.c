#include <stdio.h>

int sumNum(int num);

int main(void)
{
    int num;
    scanf("%d", &num);
    printf("%d", sumNum(num));
    return 0;
}

int sumNum(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
        sum += i;
    return sum;
}
