#include <stdio.h>

int main(void)
{
    unsigned int values[] = {10, 65, 127, 255, 256, 1024};
    size_t count = sizeof(values) / sizeof(values[0]);

    for (size_t i = 0; i < count; i++) {
        printf("Decimal: %-4u | Hexadecimal: 0x%X\n", values[i], values[i]);
    }

    return 0;
}
