#include <stdio.h>
enum
{
    SIZE_ARR = 10
};

void input(int size, int arr[]);
int positive_negative(int size, const int arr[]);
int multiplying_numbers(int pos_neg, int num);
void modify_array(int size, int arr[]);
void print(int size, int arr[]);

int main(void)
{
    int arr[SIZE_ARR];
    input(SIZE_ARR, arr);
    modify_array(SIZE_ARR, arr);
    print(SIZE_ARR, arr);
    return 0;
}

void input(int size, int arr[])
{
    int i;
    for (i=0; i<size; i++)
        scanf("%d", &arr[i]);
}

int positive_negative(int size, const int arr[])
{
    int positive = 0;
    int negative = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
            positive++;
        else
            negative++;
    }
    return (negative >= positive) ? 0 : 1;
}

int multiplying_numbers(int pos_neg, int num)
{
    int temp = 1;
    while (num > 0)
    {
        if ((pos_neg) && (num % 10) % 2 != 0)
            temp *= num % 10;
        if ((!pos_neg) && (num % 10) % 2 == 0)
            temp *= num % 10;
        num /= 10;
    }
    return temp;
}

void modify_array(int size, int arr[])
{
    int pos_neg = positive_negative(size, arr);
    for(int i = 0; i < size; i++)
    {
        if ((pos_neg) && (arr[i] % 2 != 0))
            arr[i] = multiplying_numbers(pos_neg, arr[i]);
        if ((!pos_neg) && (arr[i] % 2 == 0))
            arr[i] = multiplying_numbers(pos_neg, arr[i]);
    }
}

void print(int size, int arr[])
{
    for (int i = 0; i < size; i++)
        printf("%d ",arr[i]);
    printf("\n");
}
