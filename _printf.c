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
	int field_width;

	va_start(arglist, format);

	count = 0;

	while (*format)
	{
		if (*format == '%')
		{
			 if (isdigit(*(format + 1)))
			 {
				  format++;
				  field_width = *(format) - '0';
				  if (field_width == 0)
				  {
				  	format++;
				  	c = *format;
				  	handle_zero_flag(c, arglist, &count, field_width);
				  }

				  else
				  {
					  format++;
					  c = *format;
					  handle_zero_flag(c, arglist, &count, field_width);
				  }
			 }
		}
		else if (*format == '%' && (*(format + 1) == 'c' || *(format + 1) == 's' ||
				*(format + 1) == '%' || *(format + 1) == 'S'))
		{
			format++;
			c = *format;
			handle_char_specifier(c , arglist, &count);
		}
		else if (*format == '%' && (*(format + 1) == '+' || *(format + 1) == ' ' || *(format + 1) == '-'))
		{
			if (*(format + 2) == 'd' || *(format + 2) == 'i')
			{
				format++;
				if (*format == '-')
					format++;
				else
				{
					count += write(1, format, 1);
					format++;
				}
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
		else if (*format == '%' && (*(format + 1) == '#'))
		{
			if (*(format + 2) == 'o' || *(format + 2) == 'X' || *(format + 2) == 'x')
			{
				format++;
				format++;
				c = *format;
				handle_hash_flag(c, arglist, &count);
			}
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
		else if (*format == '%' && (*(format + 1) == 'l'))
		{
			format++;
			format++;
			c = *format;
			handle_long_specifier(c, arglist, &count);
		}
		else if (*format == '%' && (*(format + 1) == 'h'))
		{
			format++;
			format++;
			c = *format;
			handle_short_specifier(c, arglist, &count);
		}
		else if (*format == '%' && (*(format + 1) == 'r'))
		{
			format++;
			handle_reverse_specifier(arglist, &count);
		}

		else if (*format == '%' && (*(format + 1) == 'R'))
		{
			format++;
			handle_rot13_specifier(arglist, &count);
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
