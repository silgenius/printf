#include "main.h"

void handle_zero_flag(char c, va_list args, int *count, int field_width)
{
    char buffer[1024];

    switch (c)
    {
        case 'd':
        case 'i':
            sprintf(buffer, "%0*d", field_width, va_arg(args, int));
            *count += write(1, buffer, strlen(buffer));
            break;
        case 'u':
            sprintf(buffer, "%0*u", field_width, va_arg(args, unsigned int));
            *count += write(1, buffer, strlen(buffer));
            break;
        case 'o':
            sprintf(buffer, "%0*o", field_width, va_arg(args, unsigned int));
            *count += write(1, buffer, strlen(buffer));
            break;
        case 'x':
            sprintf(buffer, "%0*x", field_width, va_arg(args, unsigned int));
            *count += write(1, buffer, strlen(buffer));
            break;
        case 'X':
            sprintf(buffer, "%0*X", field_width, va_arg(args, unsigned int));
            *count += write(1, buffer, strlen(buffer));
            break;
    }
}



void handle_non_zero_flag(char c, va_list args, int *count, int field_width)
{
    char buffer[1024];

    switch (c)
    {
        case 'd':
        case 'i':
            sprintf(buffer, "%*d", field_width, va_arg(args, int));
            *count += write(1, buffer, strlen(buffer));
            break;
        case 'u':
            sprintf(buffer, "%*u", field_width, va_arg(args, unsigned int));
            *count += write(1, buffer, strlen(buffer));
            break;
        case 'o':
            sprintf(buffer, "%*o", field_width, va_arg(args, unsigned int));
            *count += write(1, buffer, strlen(buffer));
            break;
        case 'x':
            sprintf(buffer, "%*x", field_width, va_arg(args, unsigned int));
            *count += write(1, buffer, strlen(buffer));
            break;
        case 'X':
            sprintf(buffer, "%*X", field_width, va_arg(args, unsigned int));
            *count += write(1, buffer, strlen(buffer));
            break;
    }
}

