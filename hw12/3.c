#include <stdio.h>
#include <stdint.h>
#define SIZE 30
#define ERROR_NUM 10

typedef struct
{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t temp;
} sensor;

// Массив для хранения ошибок
int error_num[ERROR_NUM] = {0};

// Количество ошибок
int err_count = 0;

// Добавление записей
void add_record(sensor info[], int number, uint16_t year, uint8_t month,
                uint8_t day, uint8_t hour, uint8_t minute, int8_t temp)
{
    info[number].year = year;
    info[number].month = month;
    info[number].day = day;
    info[number].hour = hour;
    info[number].minute = minute;
    info[number].temp = temp;
}

void print(sensor info[], int number)
{
    for (int i = 0; i < number; i++)
    {
        if (info[i].year != 0)
        {
            printf("%04d-%02d-%02d %02d:%02d t=%3d\n",
                   info[i].year,
                   info[i].month,
                   info[i].day,
                   info[i].hour,
                   info[i].minute,
                   info[i].temp);
        }
    }
}

int main(void)
{
    sensor info[SIZE] = {0};
    int Y, M, D, H, m, T, n_scan, count = 0;
    FILE *open;
    char name[] = "temperature_small.csv";
    open = fopen(name, "r");

    if (open == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    while ((n_scan = fscanf(open, "%d;%d;%d;%d;%d;%d", &Y, &M, &D, &H, &m, &T)) > 0)
    {
        if (n_scan < 6)
        {
            char s[20], c;
            n_scan = fscanf(open, "%[^\n]%c", s, &c);
            for (int i = err_count; i < ERROR_NUM; i++)
                error_num[i] = count; // номер строки с ошибкой
            err_count++;
            //printf("Wrong format in line %s, %d\n", s, count);
        } else
        {
            add_record(info, count, Y, M, D, H, m, T);

            //printf("%04d-%02d-%02d %02d:%02d t=%3d\n", Y, M, D, H, m, T);
        }
        count++;
    }
    print(info, count);
    fclose(open);
    printf("sum str is %d\n", count);       // общее число строк в файле
    printf("sum err is %d\n", err_count);   // общее число строк с ошибками в файле
    // печать номера строки с ошибкой
    for (int i = 0; i < err_count; i++)
        printf("error_num is %d\n", error_num[i]);
    return 0;
}