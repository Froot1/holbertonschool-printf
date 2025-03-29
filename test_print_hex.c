#include "main.h"
#include <stdio.h>

int main(void)
{
    unsigned long int num1 = 254;
    unsigned long int num2 = 4096;
    unsigned long int num3 = 0;

    printf("Expected: 0xfe | Output: 0x");
    print_hex(num1, 0);
    printf("\n");

    printf("Expected: 0xFE | Output: 0x");
    print_hex(num1, 1);
    printf("\n");

    printf("Expected: 0x1000 | Output: 0x");
    print_hex(num2, 0);
    printf("\n");

    printf("Expected: 0x0 | Output: 0x");
    print_hex(num3, 0);
    printf("\n");

    return (0);
}
