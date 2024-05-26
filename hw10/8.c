#include <stdio.h>
#include <stdlib.h>
#define SIZE 1001

int compare(const void *a, const void *b);
void get_num(char *input, char *output);

int main(void)
{
    char input[] = "input.txt";
    char output[] = "output.txt";
    get_num(input, output);
    return 0;
}

void get_num(char *input, char *output)
{
    char str[SIZE] = {0};
    int nums[SIZE];
    int ch_amount = 0, num_amount = 0, value = 0;
    char c;
    FILE *fptr_in = fopen(input, "r");
    if (!fptr_in)
    {
        puts("File \"input.txt\" not found!");
        exit(1);
    } else
        puts("File \"input.txt\" read.");
    while ((c = fgetc(fptr_in)) != EOF && (c != '\n'))
        str[ch_amount++] = c;
    for (int i = 0; i < ch_amount; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            value = value * 10 + str[i] - '0';
            if (str[i + 1] < '0' || str[i + 1] > '9')
            {
                nums[num_amount++] = value;
                value = 0;
            }
        }
    }
    qsort(nums, num_amount, sizeof(int), compare);
    FILE *fptr_out = fopen(output, "w");
    if (!fptr_out)
    {
        puts("File \"output.txt\" not found!");
        exit(1);
    } else
        puts("File \"output.txt\" created.");
    for (int i = 0; i < num_amount; i++)
        fprintf(fptr_out, "%d ", nums[i]);
    fclose(fptr_in);
    fclose(fptr_out);
}

int compare(const void *a, const void *b)
{
    return *(int *) a - *(int *) b;
}
