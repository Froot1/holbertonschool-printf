#include "main.h"

/**
 * print_S - Prints a string 
* @args: List of arguments
* Return: Number of characters printed
*/

int print_S(va_list args)
{
char *str;
int i, count = 0;
char hex[3];

str = va_arg(args, char *);
if (!str)
str = "(null)";

for (i = 0; str[i]; i++)
{
if (str[i] < 32 || str[i] >= 127)
{
_putchar('\\');
_putchar('x');
count += 2;

sprintf(hex, "%02X", (unsigned char)str[i]);
_putchar(hex[0]);
_putchar(hex[1]);
count += 2;
}
else
{
_putchar(str[i]);
count++;
}
}

return (count);
}
