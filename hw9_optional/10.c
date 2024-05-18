#include <stdio.h>
#define SIZE 1000

int input_str(int size_str, char a[]);
void print_symbol_count(int len, char symbols[], int count[]);
int count_symbols(int len, const char arr[], char symbols[], int count[]);

int main(void)
{
    char buf[SIZE], symbols[SIZE];
    int count[SIZE];
    int len = input_str(SIZE, buf);
    int lenCount = count_symbols(len, buf, symbols, count);
    print_symbol_count(lenCount, symbols, count);
    return 0;
}

int input_str(int size_str, char a[])
{
    int count = 0;
    char input;
    while (count < size_str)
    {
        scanf("%c", &input);
        if (input == '.')
            return count;
        a[count++] = input;
    }
    return count;
}

void print_symbol_count(int len, char symbols[], int count[])
{
    for (int i = 0; i < len; i++)
        printf("%c%d", symbols[i], count[i]);
}

int count_symbols(int len, const char arr[], char symbols[], int count[])
{
    int countSymbol = 1;
    int outCount = 0;
    int i;
    for (i = 0; i < len - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            countSymbol++;
        else
        {
            symbols[outCount] = arr[i];
            count[outCount++] = countSymbol;
            countSymbol = 1;
        }
    }
    symbols[outCount] = arr[i];
    count[outCount++] = countSymbol;
    return outCount;
}
