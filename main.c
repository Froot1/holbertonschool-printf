#include "main.h"
#include <stdio.h>

int main(void)
{
    int x = 42;
    void *ptr = &x;

    _printf("Address of x: %p\n", ptr);
    printf("Address of x: %p\n", ptr); /* للتحقق من النتيجة */

    return (0);
}
