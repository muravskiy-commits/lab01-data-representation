#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t value = 254;
    printf("Start:   %u\n", value);

    value++;
    printf("254 + 1: %u\n", value);

    value++;
    printf("255 + 1: %u\n", value);

    value++;
    printf("255 + 2: %u\n", value);

    return 0;
}
