#include <stdio.h>
#include "main.h"

int main(void)
{
    long long_num = 123456789012345;
    short short_num = 32767;
    unsigned long ulong_num = 4294967295;
    unsigned short ushort_num = 65535;
    long octal_num = 0177;
    short hex_num = 0x1F;

    int printf_result;
    int _printf_result;

    printf("Testing with printf:\n");
    printf_result = printf("Long: %ld\n", long_num);
    printf("Printf Result: %d\n\n", printf_result);

    printf_result = printf("Short: %hd\n", short_num);
    printf("Printf Result: %d\n\n", printf_result);

    printf_result = printf("Unsigned Long: %lu\n", ulong_num);
    printf("Printf Result: %d\n\n", printf_result);

    printf_result = printf("Unsigned Short: %hu\n", ushort_num);
    printf("Printf Result: %d\n\n", printf_result);

    printf_result = printf("Octal: %lo\n", octal_num);
    printf("Printf Result: %d\n\n", printf_result);

    printf_result = printf("Hexadecimal: %lx\n", hex_num);
    printf("Printf Result: %d\n\n", printf_result);

    printf("Testing with _printf:\n");
    _printf_result = _printf("Long: %ld\n", long_num);
    printf("_printf Result: %d\n\n", _printf_result);

    _printf_result = _printf("Short: %hd\n", short_num);
    printf("_printf Result: %d\n\n", _printf_result);

    _printf_result = _printf("Unsigned Long: %lu\n", ulong_num);
    printf("_printf Result: %d\n\n", _printf_result);

    _printf_result = _printf("Unsigned Short: %hu\n", ushort_num);
    printf("_printf Result: %d\n\n", _printf_result);

    _printf_result = _printf("Octal: %lo\n", octal_num);
    printf("_printf Result: %d\n\n", _printf_result);

    _printf_result = _printf("Hexadecimal: %lx\n", hex_num);
    printf("_printf Result: %d\n\n", _printf_result);

    return (0);
}

