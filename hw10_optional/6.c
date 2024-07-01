#include <stdio.h>
#include <stdint.h>

union intbytes {
    uint32_t number;
    uint8_t bytes[4];
} d;

int main(void)
{
    d.number = 0x12345678;
    printf ("Number %x",d.number);
    printf(" in memory is: %x %x %x %x\n", d.bytes[0],
           d.bytes[1], d.bytes[2], d.bytes[3]);
    return 0;
}