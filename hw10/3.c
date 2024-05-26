#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ELEM 1001

void read_exist_file(char *str);
void write_new_file(char *str);

int main(void)
{
    char str_file[MAX_ELEM];
    read_exist_file(str_file);
    write_new_file(str_file);
    return 0;
}

void read_exist_file(char *str)
{
    FILE *fptr_in;
    fptr_in = fopen("input.txt", "r");
    if (fptr_in == NULL)
    {
        puts("File \"input.txt\" not found!");
        exit(1);
    } else
        puts("File \"input.txt\" read.");
    while (fscanf(fptr_in, "%[^\n]", str) == 1);
    fclose(fptr_in);
}

void write_new_file(char *str)
{
    int len = strlen(str) - 1;
    FILE *fptr_out;
    fptr_out = fopen("output.txt", "w");
    if (fptr_out == NULL)
    {
        puts("File \"output.txt\" not found!");
        exit(1);
    } else
        puts("File \"output.txt\" created.");
    for (int i = 0; i < len; ++i)
    {
        if (str[i] == str[len])
            fprintf(fptr_out, "%d ", i);
    }
    fclose(fptr_out);
}
