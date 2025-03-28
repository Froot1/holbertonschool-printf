#include "main.h"

/**
* print_X - Prints an unsigned integer in hexadecimal format 
* @args: List of arguments containing the number to print
* 
* Return: The number of characters printed
*/
int print_X(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
char buffer[12];
int i = 0, count = 0;
char hex_chars[] = "0123456789ABCDEF";

if (n == 0)
return (_putchar('0'));

while (n > 0)
{
buffer[i++] = hex_chars[n % 16];
n /= 16;
}

while (i > 0)
count += _putchar(buffer[--i]);

return (count);
}
