#include <stdio.h>
#define DEBUGPRINT fprintf (stderr, "debug in %d line\n", __LINE__)

int main(void)
{
    printf("Line number is: %d\n",__LINE__); // указывает номер строки, в которой вызывается
    DEBUGPRINT;
    return 0;
}