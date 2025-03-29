#include "main.h"
#include <stdlib.h>

/**
 * print_p - Prints a pointer address in hexadecimal format
 * @args: Argument list
 * Return: Number of characters printed
 */
int print_p(va_list args)
{
    void *ptr;
    unsigned long int address;
    int count = 0;

    ptr = va_arg(args, void *);

    if (!ptr)
        return (_puts("(nil)"));

    address = (unsigned long int)ptr;

    count += _puts("0x");
    count += print_hex(address, 0); /* 0 for lowercase */

    return (count);
}
