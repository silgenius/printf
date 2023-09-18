#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int _printf(const char *format, ...);
void handle_char_specifier(char c, va_list args, int *count);
void handle_int_specifier(char c, va_list args, int *count);
void handle_binary_specifier(char c, va_list args, int *count);
void handle_unsigned_specifier(char c, va_list args, int *count);
void handle_address_specifier(va_list args, int *count);

#endif /* MAIN_H */
