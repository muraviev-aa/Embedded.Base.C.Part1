#include <stdio.h>
#define SIZE 100

int compression(const int a[], int b[], int N);
int create_arr(int size_arr, int arr[]);
void print_arr(int size_arr, int arr[]);

int main(void)
{
    int in[SIZE];
    int out[SIZE];
    create_arr(SIZE, in);
    int count = compression(in, out, SIZE);
    print_arr(count, out);
    return 0;
}

int compression(const int a[], int b[], int N)
{
    int countNumbers = 1, countOut = 0;
    if (a[0] == 1)
        b[countOut++] = 0;
    for (int i = 0; i < N - 1; i++)
    {
        if (a[i] == a[i + 1])
            countNumbers++;
        else
        {
            b[countOut++] = countNumbers;
            countNumbers = 1;
        }
    }
    b[countOut++] = countNumbers;
    return countOut;
}

int create_arr(int size_arr, int arr[])
{
    int i;
    for (i = 0; i < size_arr; i++)
        scanf("%d", &arr[i]);
    return i;
}

void print_arr(int size_arr, int arr[])
{
    for (int i = 0; i < size_arr; i++)
        printf("%d", arr[i]);
}
