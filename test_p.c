#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int main(void)
{
    void *ptr1 = (void *)0x7fff5100b608;
    void *ptr2 = NULL;
    void *ptr3 = (void *)0x7fff5100b6f8;

    printf("[DEBUG] Expected Output:\n");
    printf("Pointer 1: 0x7fff5100b608\n");
    printf("Pointer 2: (nil)\n");
    printf("Pointer 3: 0x7fff5100b6f8\n\n");

    printf("[DEBUG] Actual Output from print_p:\n");
    print_p(ptr1);
    printf("\n");
    print_p(ptr2);
    printf("\n");
    print_p(ptr3);
    printf("\n");

    return (0);
}
