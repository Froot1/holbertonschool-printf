#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * test_print_o - Function to test the print_o function.
 * @n: The unsigned integer to print in octal.
 *
 * Return: The number of characters printed.
 */
int test_print_o(unsigned int n)
{
    va_list args;
    int count = 0;

    va_start(args, n);
    count = print_o(args);
    va_end(args);

    return (count);
}

/**
 * main - Entry point to test the print_o function.
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int number = 10;

    printf("Octal of %u: ", number);
    test_print_o(number);
    printf("\n");

    return (0);
}
