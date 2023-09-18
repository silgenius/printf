#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: A character string containing zero or more directives.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list arglist;
	int count;
	char c;

	va_start(arglist, format);

	count = 0;

	while (*format)
	{
		if (*format == '%' && (*(format + 1) == 'c' || *(format + 1) == 's' ||
				*(format + 1) == '%' || *(format + 1) == 'S'))
		{
			format++;
			c = *format;
			handle_char_specifier(c , arglist, &count);
		}
		else if (*format == '%' && (*(format + 1) == '+' || *(format + 1) == ' '))
		{
			if (*(format + 2) == 'd' || *(format + 2) == 'i')
			{
				format++;
				count += write(1, format, 1);
				format++;
				c = *format;
				handle_int_specifier(c, arglist, &count);
			}
		}
		else if (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
		{
			format++;
			c = *format;
			handle_int_specifier(c, arglist, &count);
		}
		else if (*format == '%' && (*(format + 1) == 'b'))
		{
			format++;
			c = *format;
			handle_binary_specifier(c, arglist, &count);
		}
		else if (*format == '%' && (*(format + 1) == 'o' || *(format + 1) == 'u' || *(format + 1) == 'x' || *(format + 1) == 'X'))
		{
			format++;
			c = *format;
			handle_unsigned_specifier(c, arglist, &count);
		}
		else if (*format == '%' && (*(format + 1) == 'p'))
		{
			format++;
			handle_address_specifier(arglist, &count);
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(arglist);;

	return (count);
}
