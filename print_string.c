#include "main.h"

char *print_s(va_list arglist)
{
	char *s = var_arg(arglist, char *);

	int printed_chars = 0;

	while (*s !='\0')
	{
		putchar(*s);
		s++;
		printed_chars++;
	}
	return (printed_chars);
}
