#include <stdio.h>
#include <stdlib.h>

typedef int datatype;

// Стек через динамический массив
typedef struct
{
    int size;         // размер выделенной памяти
    int sp;           // текущая точка заполнения
    datatype *item;   // указатель на сегмент выделенной памяти
} stack_arr;

// Инициализация стека
void init_stack(stack_arr *st)
{
    st->size = 4;
    st->sp = 0;
    st->item = malloc(st->size * sizeof(datatype));
}

void delete_stack(stack_arr *st)
{
    free(st->item);
}

// Добавить в стек
void push_arr(stack_arr *st, datatype value)
{
    if (st->sp >= st->size - 1)
    {
        st->size *= 2;  // увеличиваем размер выделенной памяти
        st->item = realloc(st->item, st->size * sizeof(datatype));
    }
    st->item[st->sp++] = value;
}

// Проверка есть ли в списке хотя бы один элемент
int empty_stack(stack_arr *st)
{
    return (st->sp < 1);
}

// Извлечь из стека
void pop_arr(stack_arr *st, datatype *value)
{
    if (st->sp < 1)
    {
        printf("stack empty");
        exit(1);
    }
    *value = st->item[--(st->sp)];
}

int main(void)
{
    stack_arr st;
    init_stack(&st);
    for (int i = 1; i <= 5; i++)
        push_arr(&st, i);
    datatype value;
    for (int i = 1; i <= 5; i++)
    {
        pop_arr(&st, &value);
        printf("%d ", value);
    }
    return 0;
}