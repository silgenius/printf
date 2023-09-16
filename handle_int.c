#include "main.h"

void handle_int_specifier(char c, va_list args, int *count)
{
	int tmp;
	char buffer[20];
	int written;

	switch (c)
	{
		case 'd':
		case 'i':
			tmp = va_arg(args, int);
			written = sprintf(buffer, "%d", tmp);
			*count += write(1, buffer, written);
			break;
	}
}
