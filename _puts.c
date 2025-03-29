#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to print.
 * Return: The number of characters printed.
 */
int _puts(char *str)
{
    int count = 0;

    while (str[count] != '\0')
    {
        _putchar(str[count]);
        count++;
    }

    return (count);
}
