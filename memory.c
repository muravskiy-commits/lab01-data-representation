#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t value = 0x12345678;
    unsigned char *p = (unsigned char *)&value;

    printf("value = 0x%08X\n\n", value);
    printf("%-18s %s\n", "Address", "Value");

    for (size_t i = 0; i < sizeof(value); i++) {
        printf("%-18p %02X\n", (void *)&p[i], p[i]);
    }

    return 0;
}
