#include <stdio.h>

int creatArray(int sizeArr, int arr[]);
void searchNumberPrint(int sizeArr, int arr[]);

int main(void)
{
    enum
    {
        SIZE_ARR = 10
    };
    int arr[SIZE_ARR];
    creatArray(SIZE_ARR, arr);
    searchNumberPrint(SIZE_ARR, arr);
    return 0;
}

int creatArray(int sizeArr, int arr[])
{
    int i;
    for (i = 0; i < sizeArr; i++)
        scanf("%d", &arr[i]);
    return i;
}

void searchNumberPrint(int sizeArr, int arr[])
{
    int maxCount = 0;
    int elementMaxFreq;
    for (int i = 0; i < sizeArr; i++)
    {
        int count = 0;
        for (int j = i + 1; j < sizeArr; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxCount)
        {
            maxCount = count;
            elementMaxFreq = arr[i];
        }
    }
    printf("%d", elementMaxFreq);
}
