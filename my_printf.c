#include <stdarg.h>
#include <unistd.h>

/* Function to print a single character */
int _putchar(char c) { return write(1, &c, 1); }

/* Function to print a number in a given base (8 for octal, 16 for hex) */
void print_number(unsigned int num, int base, int uppercase)
{
    char *digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
    if (num >= (unsigned int)base)
        print_number(num / base, base, uppercase);
    _putchar(digits[num % base]);
}

/* Custom printf function */
int my_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
                case 'u': print_number(va_arg(args, unsigned int), 10, 0); break;
                case 'o': print_number(va_arg(args, unsigned int), 8, 0); break;
                case 'x': print_number(va_arg(args, unsigned int), 16, 0); break;
                case 'X': print_number(va_arg(args, unsigned int), 16, 1); break;
                case '%': _putchar('%'); break;
                default: _putchar('%'); _putchar(*format);
            }
        }
        else
            _putchar(*format);
        format++;
    }

    va_end(args);
    return 0;
}

/* Test the custom printf function */
int main()
{
    my_printf("Unsigned: %u\n", 12345);
    my_printf("Octal: %o\n", 12345);
    my_printf("Hex (lowercase): %x\n", 12345);
    my_printf("Hex (uppercase): %X\n", 12345);
    return 0;
}
