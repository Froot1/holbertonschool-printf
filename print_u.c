#include "main.h"
/**
  * print_u - prints an unsigned integer
  * @args: argument to print
  * Return: integer
  */
int print_u(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    unsigned int num, last, exp = 1;
    int i = 0;

    if (n == 0)
    {
        _putchar('0');
        return (1);
    }

    num = n;
    while (num / 10 != 0)
    {
        exp *= 10;
        num /= 10;
    }

    num = n;
    while (exp > 0)
    {
        last = num / exp;
        _putchar(last + '0');
        num %= exp;
        exp /= 10;
        i++;
    }

    return (i);
}
