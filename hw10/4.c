#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 101
char INPUT[] = "input.txt";
char OUTPUT[] = "output.txt";


void search(char *input, char *output);
int compare(const void *a, const void *b);

int main(void)
{
    search(INPUT, OUTPUT);
    return 0;
}

void search(char *input, char *output)
{
    char first[SIZE] = {0}, second[SIZE] = {0}, uniq_chars[SIZE] = {0};
    FILE *fptr_in;
    fptr_in = fopen(input, "r");
    fscanf(fptr_in, "%s", first);
    fscanf(fptr_in, "%s", second);
    int amount1 = 0, flag;
    for (int i = 0; i < strlen(first); i++)
    {
        char cur = first[i];
        flag = 0;
        for (int j = 0; j < strlen(first); j++)
        {
            if (cur == first[j] && i != j)
            {
                flag++;
                break;
            }
        }
        if (!flag)
        {
            uniq_chars[amount1++] = cur;
        }
    }

    int amount2 = 0, count;
    char result[amount1];
    for (int i = 0; i < strlen(uniq_chars); i++)
    {
        char cur = uniq_chars[i];
        count = 0;
        for (int j = 0; j < strlen(second); j++)
        {
            if (cur == second[j])
            {
                count++;
            }
            if (count > 1)
            {
                break;
            }
        }
        if (count == 1)
        {
            result[amount2++] = cur;
        }
    }

    qsort(result, sizeof(char), amount2, compare);
    FILE *fptr_out = fopen(output, "w");
    for (int i = 0; i < amount2; i++)
    {
        fprintf(fptr_out, "%c ", result[i]);
    }

    fclose(fptr_in);
    fclose(fptr_out);
}

int compare(const void *a, const void *b)
{
    return *(int *) a - *(int *) b;
}
