#include <stdio.h>
#define NUM_LINE 10
#define NUM_COLUMN 10

void input_arr(int num_line, int num_column, int arr[num_line][num_column]);
int search_max(int num_line, int num_column, int arr[num_line][num_column]);
void sum_max(int num_line, int num_column, int arr[num_line][num_column]);

int main(void)
{
    int num[NUM_LINE][NUM_COLUMN];
    input_arr(NUM_LINE, NUM_COLUMN, num);
    sum_max(NUM_LINE, NUM_COLUMN, num);
    return 0;
}

void input_arr(int num_line, int num_column, int arr[num_line][num_column])
{
    for(int i = 0; i < num_line; i++)
    {
        for(int j = 0; j < num_column; j++)
            scanf("%d", &arr[i][j]);
    }
}

int search_max(int num_line, int num_column, int arr[num_line][num_column])
{
    int max = arr[num_line][0];
    for (int i = 0; i < num_column; i++)
    {
        if (max < arr[num_line][i])
            max = arr[num_line][i];
    }
    return max;
}

void sum_max(int num_line, int num_column, int arr[num_line][num_column])
{
    int sum = 0;
    for (int i = 0; i < num_line; i++)
    {
        sum += search_max(i, num_column, arr);
    }
    printf("%d\n", sum);
}