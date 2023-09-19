#include "main.h"
#include <stdio.h>

int main(void)
{
    int count;

    count = _printf("Reverse: [%r]\n", "Hello, World!");
    printf("printf Result: %d\n", count);

    count = _printf("ROT13: [%R]\n", "Uryyb, Jbeyq!");
    printf("printf Result: %d\n", count);

    return 0;
}

