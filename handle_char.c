#include "main.h"

void handle_char_specifier(char c, va_list args, int *count)
{
	char *tmp;
	char ch;

	switch (c)
	{
		case 's':
			tmp = va_arg(args, char *);
			*count += write(1, tmp, strlen(tmp));
			break;
		case 'c':
			ch = va_arg(args, int);
			*count += write(1, &ch, 1);
			break;
		case '%':
			*count += write (1, "%", 1);
			break;
		default:
			break;
	}
}
