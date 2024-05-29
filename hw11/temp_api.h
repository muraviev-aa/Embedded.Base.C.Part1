#ifndef PART1_TEMP_API_H
#define PART1_TEMP_API_H
#include <stdint.h>

typedef struct
{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t temp;
} sensor;

void average_month_temp(sensor info[], int number);
void min_month_temp(sensor info[], int number);
void max_month_temp(sensor info[], int number);
void average_year_temp(sensor info[], int year);
void min_year_temp(sensor info[], int year);
void max_year_temp(sensor info[], int year);

#endif //PART1_TEMP_API_H
