#include "main.h"

int main(void)
{
    /* Test the %p specifier */
    _printf("Pointer 1: %p\n", (void *)0x7fff5100b608);  /* Print a valid memory address */
    _printf("Pointer 2: %p\n", NULL);  /* Test NULL pointer */
    _printf("Pointer 3: %p\n", (void *)0x7fff5100b6f8);  /* Print another valid memory address */
    _printf("Pointer 4: %p\n", (void *)0x7faf51f0f608);  /* Print another valid memory address */
    _printf("Pointer 5: %p\n", (void *)-1);  /* Test an invalid memory address */
    _printf("Empty String: %p\n", "");  /* Test with an empty string */

    return 0;  /* End of the program */
}
