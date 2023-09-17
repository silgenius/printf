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

void handle_binary_specifier(char c, va_list args, int *count)
{
	unsigned int tmp;
	char buffer[32];
	char *buffer_rev;
	int i, j;
	(void) c;

	i = 0;
	j = 0;
	tmp = va_arg(args, int);
	if (tmp == 0)
		buffer[i++] = '0';
	else
	{
		while (tmp > 0)
		{
			buffer[i] = (tmp % 2) + '0';
			tmp /= 2;
			i++;
		}
		buffer[i] = '\0';
	}

	buffer_rev = malloc(strlen(buffer) + 1);
	if (buffer_rev != NULL)
	{
		for (i = i - 1; i >= 0; i--)
		{
			buffer_rev[j++] = buffer[i];
		}
	buffer_rev[j] = '\0';
	}	

	*count +=  write(1, buffer_rev, strlen(buffer_rev));

	free(buffer_rev);
}
