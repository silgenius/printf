#include "main.h"

void handle_long_specifier(char c, va_list args, int *count)
{
	long value;
	char buffer[32];

	switch (c)
	{
		case 'i':
		case 'd':
			value = va_arg(args, long);
			sprintf(buffer, "%ld", value);
			*count += write(1, buffer, strlen(buffer));
			break;
		case 'u':
			value = va_arg(args, unsigned long);
			sprintf(buffer, "%lu", value);
			*count += write(1, buffer, strlen(buffer));
			break;
		case 'o':
			value = va_arg(args, unsigned long);
			sprintf(buffer, "%lo", value);
			*count += write(1, buffer, strlen(buffer));
			break;
		case 'X':
		case 'x':
			value = va_arg(args, unsigned long);
			sprintf(buffer, (c == 'X') ? "%lX" : "%lx", value);
			*count += write(1, buffer, strlen(buffer));
			break;
	}
}

void handle_short_specifier(char c, va_list args, int *count)
{
	short value;
	char buffer[32];
	int written;

	switch (c)
	{
		case 'd':
		case 'i':
			value = (short)va_arg(args, int);
			written = sprintf(buffer, "%hd", value);
			*count += write(1, buffer, written);
			break;
		case 'u':
			value = (unsigned short)va_arg(args, unsigned int);
			written = sprintf(buffer, "%hu", value);
			*count += write(1, buffer, written);
			break;
		case 'o':
			value = (unsigned short)va_arg(args, unsigned int);
			written = sprintf(buffer, "%ho", value);
			*count += write(1, buffer, written);
			break;
		case 'X':
		case 'x':
			value = (unsigned short)va_arg(args, unsigned int);
			written = sprintf(buffer, (c == 'X') ? "%hX" : "%hx", value);
			*count += write(1, buffer, written);
			break;
	}
}


