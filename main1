#include "main.h"
#include <stdio.h>

int main(void)
{
    int num = 123;
    char ch = 'A';
    char *str = "Hello, World!";
    float fnum = 3.14;

    /* Testing _printf with various specifiers */
    _printf("Integer: %d\n", num);
    _printf("Character: %c\n", ch);
    _printf("String: %s\n", str);

    /* Testing flags and width */
    _printf("Padded integer: %5d\n", num);
    _printf("Left-justified string: %-15s\n", str);

    /* Testing custom specifiers */
    _printf("Binary: %b\n", num);
    _printf("Non-printable characters: %S\n", "Hello\nWorld");

    /* Testing flags */
    _printf("Positive integer with + flag: %+d\n", num);
    _printf("Space flag with integer: % d\n", num);
    _printf("Octal with # flag: %#o\n", num);
    _printf("Hexadecimal with # flag: %#x\n", num);
    _printf("Hexadecimal with # flag: %+X\n", num);

    /* Testing invalid specifier */
    _printf("Invalid specifier: %%z\n", 42);

    /* Testing real printf for comparison */
    printf("\nReal printf:\n");
    printf("Integer: %d\n", num);
    printf("Character: %c\n", ch);
    printf("String: %s\n", str);
    printf("Float: %f\n", fnum);
    printf("Padded integer: %5d\n", num);
    printf("Left-justified string: %-15s\n", str);
    printf("Binary: %d\n", num);
    printf("Positive integer with + flag: %+d\n", num);
    printf("Space flag with integer: % d\n", num);
    printf("Octal with # flag: %#o\n", num);
    printf("Hexadecimal with # flag: %#x\n", num);
    printf("Hexadecimal with # flag: %X\n", num);

    return 0;
}

