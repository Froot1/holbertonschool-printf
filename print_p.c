#include "main.h"
#include <stdio.h>

/**
 * print_p - Prints the address of a pointer in hexadecimal format.
 * @args: Argument list containing the pointer.
 * Return: Number of characters printed.
 */
int print_p(va_list args)
{
    void *ptr = va_arg(args, void *);

    if (ptr == NULL)
        return (_puts("(nil)"));

    return (_printf("0x%lx", (unsigned long)ptr));
}
