#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int _printf(const char *format, ...);
void handle_char_specifier(char c, va_list args, int *count);
void handle_int_specifier(char c, va_list args, int *count);
void handle_binary_specifier(char c, va_list args, int *count);
void handle_unsigned_specifier(char c, va_list args, int *count);
void handle_address_specifier(va_list args, int *count);
void handle_hash_flag(char c, va_list, int *count);
void handle_long_specifier(char c, va_list args, int *count);
void handle_short_specifier(char c, va_list args, int *count);
void handle_rot13_specifier(va_list args, int *count);
void handle_reverse_specifier(va_list args, int *count);
void handle_zero_flag(char c, va_list args, int *count, int field_width);
void handlel_non_zero_flag(char c, va_list args, int *count, int field_width);

#endif /* MAIN_H */
