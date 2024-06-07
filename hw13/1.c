#include <stdio.h>
#include <stdlib.h>

typedef int datatype;
typedef struct list
{
    datatype value;
    struct list *next;
} stack;

void push(struct list **p, datatype data)
{
    stack *ptmp;
    ptmp = malloc(sizeof(stack));
    if (ptmp == NULL)
    {
        puts("ERROR");
        exit(1);
    }
    ptmp->value = data;
    ptmp->next = *p;
    *p = ptmp;
}

_Bool empty_stack(stack *p)
{
    return p == NULL;
}

datatype pop(stack **p)
{
    stack *ptmp = *p;
    datatype c;
    if(empty_stack(*p))
        exit(1);
    c = ptmp->value;
    *p = ptmp->next;
    free(ptmp);
    return c;
}

int main(void)
{
    stack *p = NULL; // Важно для корректной работы присвоить NULL
    for (int i = 1; i <= 5; i++)
        push(&p, i);
    for (int i = 1; i <= 5; i++)
        printf("%d", pop(&p));
}