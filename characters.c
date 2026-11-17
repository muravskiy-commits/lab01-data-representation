#include <stdio.h>

int main(void)
{
    char chars[] = {'A', 'B', 'a', '0', '9'};
    size_t count = sizeof(chars) / sizeof(chars[0]);

    for (size_t i = 0; i < count; i++) {
        char c = chars[i];
        printf("Character: %c | Decimal: %-3d | Hex: 0x%02X\n",
               c, (unsigned char)c, (unsigned char)c);
    }

    return 0;
}
