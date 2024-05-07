#include <stdio.h>
#define SIZE_ARR 100

void printDigit(int N);

int main(void)
{
    int num;
    scanf("%d", &num);
    printDigit(num);
    return 0;
}

void printDigit(int N)
{
    int arr[SIZE_ARR];
    int i = 0;
    int j, r;

    while (N != 0)
    {
        r = N % 10;
        arr[i] = r;
        i++;
        N = N / 10;
    }

    for (j = i - 1; j > -1; j--)
        printf("%d ", arr[j]);
}
