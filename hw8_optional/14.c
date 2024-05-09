#include <stdio.h>

enum
{
    SIZE_ARR = 10
};

int creat_array(int size_arr, int arr[]);
void print(int size_arr, int arr[]);
int selection(int size_arr, const int in[], int out[]);

int main(void)
{
    int arr_in[SIZE_ARR], arr_out[SIZE_ARR];
    creat_array(SIZE_ARR, arr_in);
    int count = selection(SIZE_ARR, arr_in, arr_out);
    print(count, arr_out);
    return 0;
}

int creat_array(int size_arr, int arr[])
{
    int i;
    for (i = 0; i < size_arr; i++)
        scanf("%d", &arr[i]);
    return i;
}

void print(int size_arr, int arr[])
{
    for (int i = 0; i < size_arr; i++)
        printf("%d ", arr[i]);
}

int selection(int size_arr, const int in[], int out[])
{
    int count = 0;
    int flag = 1;
    for (int i = 0; i < size_arr; i++)
    {
        for (int j = i + 1; j < size_arr; j++)
        {
            if (in[i] == in[j])
            {
                for (int k = 0; k < count; k++)
                {
                    if (out[k] == in[i])
                    {
                        flag = 0;
                        break;
                    } else
                        flag = 1;
                }
                if (flag == 1)
                    out[count++] = in[i];
            }
        }
    }
    return count;
}

