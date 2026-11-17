#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

void print_binary8(uint8_t value)
{
    for (int i = 7; i >= 0; i--) {
        printf("%u", (value >> i) & 1u);
    }
}

void inspect_byte(void)
{
    unsigned int input;
    printf("Enter value (0-255): ");
    if (scanf("%u", &input) != 1 || input > 255) {
        printf("Invalid input. Expected integer from 0 to 255.\n");
        return;
    }

    uint8_t val = (uint8_t)input;
    printf("\nDecimal:      %u\n", val);
    printf("Hexadecimal:  0x%02X\n", val);
    printf("Binary:       ");
    print_binary8(val);
    printf("\n");

    if (isprint(val)) {
        printf("Character:    %c\n", val);
    } else {
        printf("Character:    [non-printable]\n");
    }
}

void inspect_uint32(uint32_t value)
{
    unsigned char *p = (unsigned char *)&value;

    printf("\nValue: 0x%08X\n", value);
    printf("Size: %zu bytes\n\n", sizeof(value));
    printf("Memory:\n");
    for (size_t i = 0; i < sizeof(value); i++) {
        printf("byte %zu: 0x%02X\n", i, p[i]);
    }

    uint16_t check = 0x0001;
    unsigned char *endian_ptr = (unsigned char *)
    printf("\nByte order: %s\n", (endian_ptr[0] == 0x01) ? "Little-endian" : "Big-endian");
}

int main(void)
{
    inspect_byte();
    inspect_uint32(0x12345678);
    return 0;
}
