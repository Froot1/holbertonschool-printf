#include "main.h"
#include <stdarg.h>

/**
 * print_o - Prints an unsigned integer in octal format.
 * @args: The arguments to print.
 *
 * Return: The number of characters printed.
 */
int print_o(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    char buffer[12];
    int i = 0, count = 0;

    if (n == 0)
    {
        return (_putchar('0'));
    }

    while (n > 0)
    {
        buffer[i++] = (n % 8) + '0';
        n /= 8;
    }

    while (i > 0)
    {
        count += _putchar(buffer[--i]);
    }

    return (count);
}
