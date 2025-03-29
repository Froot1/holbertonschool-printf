#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_p - Prints a pointer address in hexadecimal format (`%p`).
 * @args: List of arguments
 * Return: Number of characters printed
 */
int print_p(va_list args)
{
    void *ptr;
    char buffer[20]; /* Buffer to store the address in hexadecimal */
    int count = 0;

    ptr = va_arg(args, void *); /* Retrieve the pointer from the argument list */

    if (ptr == NULL)
    {
        return (_puts("(nil)")); /* Print (nil) if the pointer is NULL */
    }

    /* Convert the address to hexadecimal format */
    snprintf(buffer, sizeof(buffer), "%p", ptr);

    /* Print the formatted address */
    count = _puts(buffer);

    return (count);
}
