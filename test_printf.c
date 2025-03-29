#include "main.h"
#include <stdio.h>

void test_print_p(void)
{
    void *ptr = (void *)0x7fff5100b6f8;
    _printf("Testing pointer: %p\n", ptr);
}
