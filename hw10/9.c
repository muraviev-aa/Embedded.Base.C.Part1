#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1001

void uniq_string(char *input, char *output);

int main(void)
{
    char input[] = "input.txt";
    char output[] = "output.txt";
    uniq_string(input, output);
    return 0;
}

void uniq_string(char *input, char *output)
{
    char str[SIZE];
    int is_writen[127] = {0};
    FILE *fptr_in = fopen(input, "r");
    if (fptr_in == NULL)
    {
        puts("File \"input.txt\" not found!");
        exit(1);
    } else
        puts("File \"input.txt\" read.");
    fgets(str, SIZE, fptr_in);
    FILE *fptr_out = fopen(output, "w");
    if (fptr_out == NULL)
    {
        puts("File \"output.txt\" not found!");
        exit(1);
    } else
        puts("File \"output.txt\" created.");
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] > 32)
        {
            if (is_writen[str[i]] == 0)
            {
                is_writen[str[i]] = 1;
                fputc(str[i], fptr_out);
            }
        }
    }
    fclose(fptr_in);
    fclose(fptr_out);
}
