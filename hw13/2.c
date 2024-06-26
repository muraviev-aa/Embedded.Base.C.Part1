#include <stdio.h>
#include <stdlib.h>

typedef int datatype;

// Шаблон стека через динамический массив
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

// Добавить значение в динамический массив
void push_arr(stack_arr *st, datatype value)
{
    if (st->sp >= st->size - 1)
    {
        st->size *= 2;  // увеличиваем размер выделенной памяти
        st->item = realloc(st->item, st->size * sizeof(datatype));
    }
    st->item[st->sp++] = value;
}

// Извлечь значение из динамического массива
void pop_arr(stack_arr *st, datatype *value)
{
    if (st->sp < 1)
    {
        printf("stack empty");
        exit(1);
    }
    *value = st->item[--(st->sp)];
}

// Удаление динамического массива из памяти
void delete_stack(stack_arr *st)
{
    free(st->item);
}

int main(void)
{
    stack_arr st;
    stack_arr *pst = &st;
    init_stack(pst);
    for (int i = 1; i <= 5; i++)
        push_arr(pst, i);
    datatype value;
    for (int i = 1; i <= 5; i++)
    {
        pop_arr(pst, &value);
        printf("%d ", value);
    }
    // Удаляем динамический массив из кучи
    delete_stack(pst);
    return 0;
}