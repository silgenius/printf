#include "main.h"

void handle_reverse_specifier(va_list args, int *count)
{
	char *str = va_arg(args, char *);
	int len = strlen(str);
	int i;

	for (i = len - 1; i >= 0; i--)
		*count += write(1, &str[i], 1);
}


void handle_rot13_specifier(va_list args, int *count)
{
	char *str = va_arg(args, char *);
	char c;

	while (*str != '\0')
	{
		c = *str;
		if (('a' <= c && c <= 'm') || ('A' <= c && c <= 'M'))
		{
			c += 13;
			*count += write(1, &c, 1);
		}
		else if (('n' <= c && c <= 'z') || ('N' <= c && c <= 'Z'))
		{
			c -= 13;
			*count += write(1, &c, 1);
		}
		else
			*count += write(1, &c, 1);
	str++;
	}
}
