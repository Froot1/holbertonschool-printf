#include <unistd.h>

/**
 * _puts - Prints a string followed by a new line
 * @str: The string to print
 * Return: Number of characters printed
 */
int _puts(char *str)
{
    int len = 0;

    while (str[len])
        len++;

    return (write(1, str, len));
}
