#include <stdio.h>
#include "main.h"

int main(void)
{
    int x = 42;
    int *ptr = &x;

    _printf("Custom printf: Pointer: %p\n", ptr);
    printf("Original printf: Pointer: %p\n", (void *)ptr);

    return (0);
}
