#include "main.h"

int print_c(va_list arglist)
{
	char c = va_arg(arglist, int);
	_putchar(c);
	return (1);
}
