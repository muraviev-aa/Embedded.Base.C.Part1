#include <stdio.h>

const double PI = 3.1416;

double series_sum(double x);

int main(void)
{
    float x;
    scanf("%f", &x);
    printf("%.3f", series_sum(x));
    return 0;
}

double series_sum(double x)
{
    double result = 1.0, s = 1.0, fact = 1.0, pow = 1.0;
    x *= (PI / 180);
    for (int i = 1; i < 5; i++)
    {
        s *= -1;
        fact *= (2 * i - 1) * (2 * i);
        pow *= x * x;
        result += s * pow / fact;
    }
    return result;
}
