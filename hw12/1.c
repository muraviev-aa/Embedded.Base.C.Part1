#include <stdio.h>

int main(int argc, char *argv[])
{
    int size = 0;
    printf("argc = %d\n", argc);
    for (int i = 1; i < argc; i++)
    {
        printf("i = %d, argv = %s\n", i, argv[i]);
        char *str = argv[i];
        if (str[0] == '-')
        {
            switch (str[1])
            {
                case 'h':
                    printf("HELP\n");
                    break;
                case 's':
                    sscanf(argv[i + 1], "%d", &size);
                    printf("%d %s %d\n", size, argv[i + 1], i + 1);
                    break;
                default:
                    break;
            }
        }
    }
    return 0;
}