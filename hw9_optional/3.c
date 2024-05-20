#include <stdio.h>
#define COUNT 1000

void print_result(int size_arr, int arr[]);
void count_digits(const char number[], int result[]);

int main(void)
{
    char number[COUNT];
    int result[10] = {0};
    scanf("%s", number);
    count_digits(number, result);
    print_result(10, result);
    return 0;
}

void print_result(int size_arr, int arr[])
{
    for (int i = 0; i < size_arr; i++)
    {
        if (arr[i] > 0)
            printf("%d %d\n", i, arr[i]);
    }
}

void count_digits(const char number[], int result[])
{
    for (int i = 0; number[i] != '\0'; i++)
        result[number[i] - '0']++;
}
