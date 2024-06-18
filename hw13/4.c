#include <stdio.h>
#include <stdlib.h>

typedef int datatype;

// Шаблон стека через очередь
typedef struct listq
{
    datatype value;
    struct listq *next;
} queue;

// Проверка пуст стек или нет
_Bool empty_queue(queue *p)
{
    return p == NULL;
}

// Добавление в очередь
void enqueue(queue **p, datatype data)
{
    queue *ptmp = *p;
    queue *elem = malloc(sizeof(queue));
    elem->value = data;
    elem->next = NULL;
    if (empty_queue(*p))
    {
        *p = elem;
        return;
    }
    while (ptmp->next)
        ptmp = ptmp->next;
    ptmp->next = elem;
}

// Извлечение из очереди
datatype dequeue(queue **p)
{
    queue *ptmp = *p;
    datatype c;
    // Попытка взять из пустой очереди
    if (empty_queue(*p))
    {
        fprintf(stderr, "Error. Queue is empty\n");
        exit(1);
    }
    c = ptmp->value;
    *p = ptmp->next;
    free(ptmp);
    return c;
}

// Рекурсивная функция
void enqueue_recurs(queue **pl, datatype data)
{
    if (*pl == NULL)
    {
        (*pl) = malloc(sizeof(queue));
        (*pl)->value = data;
        (*pl)->next = NULL;
        return;
    } else
        enqueue_recurs(&((*pl)->next), data);
}

int main(void)
{
    queue *pq = NULL;
    for (int i = 1; i <= 5; i++)
    {
        enqueue_recurs(&pq, i);
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 1; i <= 5; i++)
        printf("%d ", dequeue(&pq));
    return 0;
}