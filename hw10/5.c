#include <stdio.h>
#include <stdlib.h>
#define SIZE 1001
char INPUT[] = "input.txt";
char OUTPUT[] = "output.txt";

void change_str(char *input, char *output);
char replace_method(char c);

int main(void)
{
    change_str(INPUT, OUTPUT);
    return 0;
}

void change_str(char *input, char *output)
{
    char cur;
    FILE *fptr_in = fopen(input, "r");
    if (!fptr_in)
    {
        puts("File \"input.txt\" not found!");
        exit(1);
    } else
        puts("File \"input.txt\" read.");
    FILE *fptr_out = fopen(output, "w");
    if (!fptr_out)
    {
        puts("File \"output.txt\" not found!");
        exit(1);
    } else
        puts("File \"output.txt\" created.");
    while ((cur = fgetc(fptr_in)) != EOF && cur != '\n')
        fputc(replace_method(cur), fptr_out);
    fclose(fptr_in);
    fclose(fptr_out);
}

char replace_method(char c)
{
    if (c == 'a' || c == 'A')
        return c + 1;
    if (c == 'b' || c == 'B')
        return c - 1;
    return c;
}
