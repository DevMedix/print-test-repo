#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_int2 - Handles the conversion of int
* @input: The input
*
* Return: Void
*/

void print_int2(const char *input, ...)
{
	va_list args;

	va_start(args, input);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
		switch (*input)
		{
		case 'd':
		case 'i':
		{
		int num = va_arg(args, int);

		_printf("%d", num);
		break;
		}
		default:
			_putchar(*input);
		break;
		}
		}
		else
		{
			_putchar(*input);
		}
		format++;
	}

	va_end(args);
}
