#include <stdio.h>
#include "temp_api.h"
#define SIZE 30


int main(void)
{
    sensor info[SIZE];
    uint8_t month_number = 1;
    uint16_t year_number = 2024;
    average_month_temp(info, month_number);
    min_month_temp(info, month_number);
    max_month_temp(info, month_number);
    average_year_temp(info, year_number);
    min_year_temp(info, year_number);
    max_year_temp(info, year_number);
    return 0;
}