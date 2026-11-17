#include <stdio.h>
#include <stdint.h>

void print_binary(uint8_t value)
{
    for (int i = 7; i >= 0; i--) {
        printf("%u", (value >> i) & 1u);
    }
}

int main(void)
{
    int8_t signed_value = -1;
    uint8_t unsigned_value = 255;

    printf("signed_value:   dec = %d, hex = 0x%02X, bin = ",
           signed_value, (uint8_t)signed_value);
    print_binary((uint8_t)signed_value);
    printf("\n");

    printf("unsigned_value: dec = %u, hex = 0x%02X, bin = ",
           unsigned_value, unsigned_value);
    print_binary(unsigned_value);
    printf("\n");

    return 0;
}
