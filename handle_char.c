#include "main.h"

void handle_char_specifier(char c, va_list args, int *count)
{
	char *tmp;
	char ch, buffer[5];
	int i, written;

	switch (c)
	{
		case 's':
			tmp = va_arg(args, char *);
			if (tmp != NULL)
			{
				*count += write(1, tmp, strlen(tmp));
				break;
			}
		case 'c':
			ch = va_arg(args, int);
			*count += write(1, &ch, 1);
			break;
		case '%':
			*count += write (1, "%", 1);
			break;
		case 'S':
			tmp = va_arg(args, char *);
			
			for (i = 0; tmp[i] != '\0'; i++)
			{
				if (tmp[i] < 32 || tmp[i] >= 127)
				{
					written = sprintf(buffer, "\\x%02X", tmp[i]);
					*count += write(1, buffer, written);
				}
				else
					*count += write(1, &tmp[i], 1);
			}
		default:
			break;
	}
}
