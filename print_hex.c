#include "main.h"

/**
 * print_hex - Converts an unsigned long int to hexadecimal and prints it
 * @num: The number to convert
 * @uppercase: Flag to determine if the output should be uppercase
 * Return: Number of characters printed
 */
int print_hex(unsigned long int num, int uppercase)
{
    char buffer[20];
    int i = 0, count = 0;
    char *hex_digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

    if (num == 0)
        return (_putchar('0'));

    while (num)
    {
        buffer[i++] = hex_digits[num % 16];
        num /= 16;
    }

    while (i--)
        count += _putchar(buffer[i]);

    return (count);
}
