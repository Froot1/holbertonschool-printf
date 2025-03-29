#include "main.h"

/**
 * print_hex - Converts an unsigned long integer to hexadecimal and prints it.
 * @num: The number to convert.
 * @uppercase: 1 for uppercase letters, 0 for lowercase.
 * Return: The number of characters printed.
 */
int print_hex(unsigned long num, int uppercase)
{
    char buffer[20];
    char *hex_digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
    int i = 0, count = 0;

    if (num == 0)
        return (_putchar('0'));

    while (num > 0)
    {
        buffer[i++] = hex_digits[num % 16];
        num /= 16;
    }

    while (i--)
        count += _putchar(buffer[i]);

    return (count);
}
