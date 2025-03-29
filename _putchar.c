#include <unistd.h>

/**
 * _putchar - Write the character to stdout.
 * @c: The character to print.
 * Return: 1 on success, -1 on failure.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
