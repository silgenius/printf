#include "main.h"

void handle_address_specifier(va_list args, int *count)
{
	char buffer[20];
	int written;
	void *tmp;

	tmp = va_arg(args, void*);
	written = sprintf(buffer, "%p", tmp);
	*count += write(1, buffer, written);
}
